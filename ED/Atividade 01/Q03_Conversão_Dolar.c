#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).*/

main()
{
    float Dolar_input,Dolar_Base,Real;
    printf("Quantos dolares voce quer converter para real:");
    scanf("%f",&Dolar_input);
    printf("Quanto vale um dolar:");
    scanf("%f",&Dolar_Base);
    Real = Dolar_input*Dolar_Base;
    printf(" Dolares %0.2f sao %0.2f Reais\n\n",Dolar_input,Real);
    system("PAUSE");
}