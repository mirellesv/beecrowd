var input = require('fs').readFileSync('ex1051/stdin', 'utf8');
var lines = input.split('\n');

const [salario] = lines
let valorAPagar
let excesso, excesso2

if(salario <= 2000.00){
    console.log('Isento')
}else if(salario < 3000.00){
    valorAPagar = (salario - 2000.00)*0.08
    console.log(`R$ ${valorAPagar.toFixed(2)}`)
}else if(salario < 4500.00){
    excesso = salario - 3000.00
    valorAPagar = (salario - 2000.00 - excesso)*0.08 + excesso*0.18
    console.log(`R$ ${valorAPagar.toFixed(2)}`)
}else{
    excesso2 = salario - 4500.00
    excesso = salario - 3000.00 - excesso2
    valorAPagar = (salario - 2000.00 - excesso - excesso2)*0.08 + excesso*0.18 + excesso2*0.28
    console.log(`R$ ${valorAPagar.toFixed(2)}`)
}