#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia 1 (um) número de 2 (dois) dígitos, verifique e escreva se o algarismo da dezena é igual ou diferente
do algarismo da unidade.*/

main()
{
  char pass[2];
   
    printf("\nDigite um numero: ");
	scanf("%f",&pass);	
	
	if (pass[0] == pass[1])
		printf("Algorimos Iguais");
    else
       printf("Algorimos Diferentes");       
	
    system("PAUSE");
   }