var input = require('fs').readFileSync('ex1061/stdin', 'utf8');
var duracao = input.split('\n');

const horarios = duracao.filter(
    duracao => duracao.includes(':')
);

const dias = duracao.filter(
    duracao => !duracao.includes(':')
);

const [dia_inicial] = dias[0].match(/(\d+)/);
const [dia_final] = dias[1].match(/(\d+)/);
const inicio = horarios[0].split(':');
const fim = horarios[1].split(':');
let segundos, minutos, horas, diferenca_dias;

// Conversão de um array de strings para um array de Number
let duracao_inicial = [];
let duracao_final = [];

for(let i = 0; i < inicio.length; i++){
    duracao_inicial.push(parseInt(inicio[i]));
    duracao_final.push(parseInt(fim[i]));
}

calcula_diferenca(duracao_inicial, duracao_final, dia_final, dia_inicial);

console.log(`${diferenca_dias} dia(s)
${horas} hora(s)
${minutos} minuto(s)
${segundos} segundo(s)`);

function calcula_diferenca(duracao_inicial, duracao_final, dia_final, dia_inicial){
    if(duracao_inicial[2] > duracao_final[2]){ // Se a quantidade de segundos final for maior que a inicial, então, será emprestado 1 minuto (60 segundos)
        duracao_final[2] = duracao_final[2] + 60;

        // Se a quantidade de minutos não for nula, será apenas decrementado 1 minuto
        if(duracao_final[1] !== 0){
            duracao_final[1]--;
        }else{ // Caso ela for nula, então será emprestado das horas
            duracao_final[0]--;
            duracao_final[1] = 60;
        }
    }

    segundos = duracao_final[2] - duracao_inicial[2];

    // O mesmo raciocínio dos segundos é aplicado para calcular a diferença de minutos
    if(duracao_inicial[1] > duracao_final[1]){
        duracao_final[1] = duracao_final[1] + 60;

        if(duracao_final[0] !== 0){
            duracao_final[0]--;
        }else{
            dia_final--;
        }
    }

    minutos = duracao_final[1] - duracao_inicial[1];

    // // Se a quantidade de horas final for menor que a inicial, será emprestado dos dias (1 dia = 24 h)
    if(duracao_inicial[0] > duracao_final[0]){
        duracao_final[0] = duracao_final[0] + 24;

        if(dia_final != dia_inicial){
            dia_final--;
        }
    }

    horas = duracao_final[0] - duracao_inicial[0];

    // Calculando a diferença dos dias
    if(dia_final >= dia_inicial){
        diferenca_dias = dia_final - dia_inicial;
    }
}
