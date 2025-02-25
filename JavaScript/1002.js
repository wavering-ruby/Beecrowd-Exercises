var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let a = parseInt(prompt());
let b = parseInt(prompt());

let x = a + b;

console.log(`X = ${x}\n`)