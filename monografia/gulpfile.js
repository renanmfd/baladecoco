/*jslint browser: true, devel: true, node: true, rhino: false, nomen: true,
         regexp: true, unparam: true, indent: 2, maxlen: 80*/

/**
 * @author Renan Dias - renanmfd@gmail.com
 *
 * GULP
 * -- latex
 */
(function gulpClosure() {
  'use strict';

  // Gulp core.
  var gulp = require('gulp'),
    //pdflatex = require('gulp-pdflatex'),
    latex = require('gulp-latex');

  /**
   * LaTeX build.
   */
  gulp.task('latex', function latexTask() {
    return gulp.src('./latex/monografia.tex')
      .pipe(latex({format: 'dvi'}))
      .pipe(gulp.dest('./build/'));
  });
  gulp.task('pdflatex', function pdfLatexTask() {
    return gulp.src('./latex/monografia.tex')
      .pipe(latex({format: 'pdf'}))
      .pipe(gulp.dest('./build/'));
  });

  /**
   * All build tasks, for executing without watch.
   */
  gulp.task('build', ['latex', 'pdflatex']);

  /**
   * Browser sync watch.
   */
  gulp.task('watch', function watchTask() {
    gulp.watch('./latex/*.tex', ['build']);
  });

  /**
   * Default task.
   */
  gulp.task('default', ['build', 'watch']);

}());
