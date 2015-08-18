/**
 * To add a custom filter, just add a function to the exports object.
 * The name of the filter will be the same as the function name.
 */

/**
 * Format a string to use as CSS classes.
 *
 * @example
 * // my_str = 'Variables Are Cool 4';
 * {{ my_str|css }}
 * // => my_str = 'variables-are-cool-4'
 *
 * @param  {*} input
 * @return {*} String formated as CSS class.
 * 
 * Custom filter by renanmfd.
 */
exports.css = function(input) {
  var step1 = input.toLowerCase(); // to lowercase
  var step2 = step1.replace(/[^\w\s]/gi, '') // remove special chars
  var step3 = step2.replace(/\s/g, '-'); // remove spaces
  return step3;
};
