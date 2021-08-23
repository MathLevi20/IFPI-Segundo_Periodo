#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia 2 (dois) números, verifique e escreva o menor e o maior entre os números lidos.*/

main()
{
    float Num_01,Num_02;
    printf("Escreva um numero:");
    scanf("%f",&Num_01);
    printf("Escreva outro numero:");
    scanf("%f",&Num_02);
    if (Num_02<Num_01){
        printf("Numero maior eh %0.2f Numero Menor eh %0.2f",Num_01,Num_02);
    }
    else{
        printf("Numero maior eh %0.2f Numero Menor eh %0.2f",Num_02,Num_01);
    }
    system("PAUSE");
}