/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const result = [];
    const len = arr.length;
    for(let i = 0; i < len; i++) {
        if(fn(arr[i], i)) {
            result.push(arr[i]);
        }
    }
    return result;
};