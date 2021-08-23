#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia um número e mostre na tela se o número é positivo ou negativo.*/

main()
{
    float Num;
    printf("Escreva um numero:");
    scanf("%f",&Num);
    if (0>Num)
        printf("Numero eh negativo\n");
    
    else if (0<Num)
        printf("Numero eh positivo\n");
    
    
    system("PAUSE");
}