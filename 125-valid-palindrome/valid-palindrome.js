/**
 * @param {string} s
 * @return {boolean}

 */
 // check oute 
var conditionCheck = function(ch) {
    // Agar digit hai
    if (ch >= '0' && ch <= '9') return true;
    // Agar alphabet hai (case-insensitive)
    if (ch.toLowerCase() >= 'a' && ch.toLowerCase() <= 'z') return true;
    return false;
};

var isPalindrome = function(s) {
 let filtered ="";
 for(  let i = 0; i<s.length;i++){
    if(conditionCheck(s[i])){
        filtered += s[i].toLowerCase();
    }
 }
 let left = 0;
 let right = filtered.length-1;
 while(left <right){
    if(filtered[left] !== filtered[right]){
        return false;
    }
    left++;
    right--;
 }
 return true;
    
};