#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)*/

main()
{
    float Metros_Segundo, Kilometros_hora;
    printf("insira a velocidade em M/s:");
    scanf("%f", &Metros_Segundo);
    Kilometros_hora = Metros_Segundo * 3.6;
    printf("velocidade em  ....:%0.2f km\n\n", Kilometros_hora);
    system("PAUSE");
}