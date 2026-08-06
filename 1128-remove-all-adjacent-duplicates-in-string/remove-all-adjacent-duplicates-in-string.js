/**
 * @param {string} s
 * @return {string}
 */
var removeDuplicates = function(s) {
   let n = s.length; // ✅ correct

  let ch = [];

    for(  let  i = 0;i<n;i++){
        let lastc =  ch.length-1;
       if(ch.length > 0 && ch[lastc] === s[i]){

            ch.pop();
        }else{
            ch.push(s[i]);
        }
    }

   return ch.join("");

    
};