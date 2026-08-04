/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let  n  = s.length;
    let i =0;
    let j =  n-1;
    while(  i < j ){
        let tem =  s[i];
          s[i] = s[j]
          s[j] = tem;
          i++;
          j--;
    }
    return s;
};