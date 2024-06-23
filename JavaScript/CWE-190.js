// Vulnerable JavaScript code with integer overflow

function add(a, b) {
    return a + b;
}

let maxInt = Number.MAX_SAFE_INTEGER;
console.log("Max Safe Integer:", maxInt);

// Trigger integer overflow
let result = add(maxInt, 1);
console.log("Result:", result);

// Check if overflow occurred
if (result < maxInt) {
    console.log("Integer overflow detected!");
} else {
    console.log("No overflow.");
}
