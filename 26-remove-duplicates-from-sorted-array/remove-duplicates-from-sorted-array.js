/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let n =  nums.length;
    let ans =1;
    for( let i =1;i<n;i++){
        if(nums[i-1] != nums[i]){
            nums[ans] =  nums[i];
            ans++;
        }
    }
    return ans;
    
};