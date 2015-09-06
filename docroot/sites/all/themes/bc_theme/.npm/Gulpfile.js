'use strict';

var gulp = require('gulp'),
  browserSync = require('browser-sync'),
  filter = require('gulp-filter'),
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
  },
  // URL for local website.
  myproxy = "local.baladecoco.com";

/**
 * Start the BrowserSync Static Server + Watch files
 */
gulp.task('serve', ['sass', 'js'], function () {

  browserSync({
    proxy: myproxy
  });
  
  gulp.watch(src.js,   ['js']);
  gulp.watch(src.scss, ['sass']);
  //gulp.watch(src.html, ['templates']);
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
    }))
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

gulp.task('default', ['serve']);
