#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia uma letra e verifique se letra é "F" e escreva “F – Feminino” ou “M” e escreva “M – Masculino”,
se não for nem F ou M, escreva “Sexo Inválido”.*/

main()
{
    char Sexo;
    printf("Qual o sexo:");
    scanf("%c",&Sexo);
    
    if(Sexo == 'f'|| Sexo == 'F')
        printf("F Feminino\n");
    else if(Sexo == 'm'|| Sexo == 'M')
        printf("M Masculino\n");
    else
        printf("Sexo Invalido\n");
    
    system("PAUSE");
}