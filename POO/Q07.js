
const prompt = require('prompt-sync')()
function main(){

const n = 5

    //Vetor
const vetor = new Array(n)
for (let i = 0; i < vetor.length; i++) {
        vetor[i] = Number(prompt('Digite o Valor de N: '))
    console.log(`A posição: ${i} tem o valor ${vetor[i]}`)    

}
console.log(` Vetores ${vetor}`)
}
main()