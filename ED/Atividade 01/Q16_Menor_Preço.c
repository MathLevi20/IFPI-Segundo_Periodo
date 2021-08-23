#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia o preço de três produtos e informe qual produto deve ser comprado, sabendo que a decisão é
sempre pelo mais barato.*/

main()
{
    float Produto01,Produto02,Produto03;
    printf("Valor do 01 Produto:");
    scanf("%f",&Produto01);
    printf("Valor do 02 Produto:");
    scanf("%f",&Produto02);
    printf("Valor do 03 Produto:");
    scanf("%f",&Produto03);
    if (Produto01<=Produto02 && Produto01<=Produto03)
        printf("Produto 01 eh Menor\n");
    
    else if (Produto02<=Produto01 && Produto02<=Produto03)
        printf("Produto 02 eh Menor \n");
    
    else if (Produto03<=Produto01 && Produto03<=Produto02)
        printf("Produto 03 eh Menor \n");
    
    
    system("PAUSE");
}