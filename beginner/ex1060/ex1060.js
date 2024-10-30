var input = require('fs').readFileSync('ex1060/stdin', 'utf8');
var numeros = input.split('\n');

let quantPares = 0;

numeros.forEach(numero => {
    if(numero > 0) 
        quantPares++
    }
)

console.log(`${quantPares} valores positivos`)