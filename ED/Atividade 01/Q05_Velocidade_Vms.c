#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)*/

main()
{
    float Metros_Segundo, Kilometros_hora;
    printf("insira a velocidade em Km/h:");
    scanf("%f",&Kilometros_hora);
    Metros_Segundo = Kilometros_hora/3.6;
    printf("velocidade em ....:%0.2f m/s\n\n",Metros_Segundo);
    system("PAUSE");
}