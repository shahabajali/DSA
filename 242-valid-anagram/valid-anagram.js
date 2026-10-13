/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
     let a = s.split("").sort();
    let b = t.split("").sort();
    if( a.length !=  b.length){
        return false;
    }
    let n =  a.length;
    for( let i = 0; i<n; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
};