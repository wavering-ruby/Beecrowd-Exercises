var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let raio = parseFloat(prompt());

const pi = 3.14159;

let area = pi * (raio * raio)

console.log(area);