// fibonaxxi number is :-- 0,1,1,2,3,5,8,13,21,34.........


function fibRecursion(n) {
    if(n <= 1) return n;
    return fibRecursion(n -1) + fibRecursion(n- 2);
}

console.log(fibRecursion(7));



















// var fib = function(n) {
//     let arr = [0, 1];

//     for(let i = 2; i <= n; i++){
//         arr.push(arr[i-2] + arr[i-1]);
//     }
//     return arr[n];
// }

// console.log(fib(5));
