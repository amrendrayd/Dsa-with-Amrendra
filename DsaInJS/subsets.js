function subsets(nums){
    let result = [];
    let temp = [];

    function recursiveSubset(nums , i) {
        if(i === nums.length){
            return result.push([...temp]);
        }
        
        temp.push(nums[i]);
        recursiveSubset(nums, i+1);
        temp.pop();
        recursiveSubset(nums, i+1);
    }
    recursiveSubset(nums, 0);
    return result
}

console.log((subsets([1,2,3])));
