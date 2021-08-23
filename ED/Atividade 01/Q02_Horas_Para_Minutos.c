#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia um valor em horas e um valor em minutos, calcule e escreva o equivalente em minutos.*/

main()
{
    float Horas, Minutos ,Minutos_Resultado;
    printf("insira as horas:");
    scanf("%f",&Horas);
    printf("insira as Minutos:");
    scanf("%f",&Minutos);
    Minutos_Resultado = ((Horas*60)+Minutos);
    printf("Sao %0.2f Minutos\n\n",Minutos_Resultado);
    system("PAUSE");
}