#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia dois valores e uma das seguintes operações a serem executadas (codificadas da seguinte forma: 1 –
Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão). Calcule e escreva o resultado dessa operação
sobre os dois valores lidos.*/

main()
{
    float Num01,Num02,Op,resultado;
    printf("Primeiro Numero:");
    scanf("%f", &Num01);
    printf("Segundo Numero:");
    scanf("%f", &Num02);
    printf("Qual Operacao (1 Adicao, 2 Subtracao, 3 Multiplicacao e 4 Divisao):");
    scanf("%f", &Op);

    if(Op == 1){
        resultado = Num01+Num02;
        printf("Adicao Resultado:%0.2f\n",resultado);
    }
    else if(Op == 2){
        resultado = Num01-Num02;

        printf("Subtracao Resultado:%0.2f\n",resultado);     
    }
    else if(Op == 3){
        printf("Multiplicacao Resultado:%0.2f\n",resultado);
        resultado = Num01*Num02;
    }
    else if(Op == 4){
        resultado = Num01/Num02;
        printf( "Divisao Resultado:%0.2f\n",resultado);}
    else{
        printf( "Operacao invalida\n");
    }

    system("PAUSE");
}