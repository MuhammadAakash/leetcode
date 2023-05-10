type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
    let value = init;
    for(let num in nums) {
        value = fn(value, nums[num]);
    }
    return value;
};