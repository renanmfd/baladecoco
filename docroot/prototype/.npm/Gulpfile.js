'use strict';

var gulp = require('gulp'),
  browserSync = require('browser-sync'),
  filter = require('gulp-filter'),
  swig = require('gulp-swig'),
  sass = require('gulp-ruby-sass'),
  sourcemaps = require('gulp-sourcemaps'),
  autoprefixer = require('gulp-autoprefixer'),
  prettify = require('gulp-html-prettify'),
  reload = browserSync.reload,
  jshint = require('gulp-jshint'),
  jshint_reporter = require('jshint-stylish'),
  custom_filters = require('./swig/custom_filters.js'),
  src = {
    scss: '../scss/**/*.scss',
    css: '../css',
    js: '../js/script.js',
    html: '../templates/**/*.twig',
  };

/**
 * Start the BrowserSync Static Server + Watch files
 */
gulp.task('serve', ['sass', 'templates', 'js'], function () {

  browserSync({
    server: "../",
    files: ["../css/styles.css", src.html]
  });
  
  gulp.watch(src.js,   ['js']);
  gulp.watch(src.scss, ['sass']);
  gulp.watch(src.html, ['templates']);
});

/**
 * Process JS files.
 */
gulp.task('js', function() {
  return gulp.src('../js/script.js')
    .pipe(jshint())
    .pipe(jshint.reporter(jshint_reporter))
    .pipe(reload({
      stream: true
    }));
});

/**
 * Kick off the sass stream with source maps + error handling
 */
function sassStream() {
  return sass('../scss', {
    sourcemap: true,
    style: 'expanded',
    unixNewlines: true
  })
    .on('error', function (err) {
      console.error('Error!', err.message);
    })
    .pipe(autoprefixer({ browsers: ['> 2%', 'last 2 version']}))
    .pipe(sourcemaps.write('./', {
      includeContent: false,
      sourceRoot: '../scss'
    }));
}


/**
 * Compile sass, filter the results, inject CSS into all browsers.
 */
gulp.task('sass', function () {
  return sassStream()
    .pipe(gulp.dest(src.css))
    .pipe(filter("**/*.css"))
    .pipe(reload({
      stream: true
    }));
});	


/**
 * Generate templates.
 */
gulp.task('templates', function () {
  return gulp.src(src.html)
    .pipe(swig({
      load_json: true,
	  json_path: './swig/',
      defaults: {
        cache: false
      },
      setup: function(swig) {
        for (var key in custom_filters) {
          swig.setFilter(key, custom_filters[key]);
        }
      },
    }))
    .pipe(prettify({indent_char: ' ', indent_size: 2}))
    .pipe(gulp.dest('./../'))
    .on("end", reload);
});

gulp.task('default', ['serve']);
