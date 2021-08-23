#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia 3 (três) números, verifique e escreva o maior entre os números lidos.*/

main()
{
    float Num_01,Num_02,Num_03;
    printf("Escreva um numero:");
    scanf("%f",&Num_01);
    printf("Escreva outro numero:");
    scanf("%f",&Num_02);
    printf("Escreva outro numero:");
    scanf("%f",&Num_03);
    if (Num_01>=Num_02 && Num_01>=Num_03)
        printf("Numero maior eh %0.2f\n",Num_01);
    
    else if (Num_02>=Num_01 && Num_02>=Num_03)
        printf("Numero maior eh %0.2f\n",Num_02);
    
    else if (Num_03>=Num_01 && Num_03>=Num_02)
        printf("Numero maior eh %0.2f\n",Num_03);
    
    
    system("PAUSE");
}