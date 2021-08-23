#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia 2 datas (cada data é composta por 3 variáveis inteiras: dia, mês e ano) e escreva qual delas é a mais
recente.*/

main()
{
    int Dia1,Mes1,Ano1,Dia2,Mes2,Ano2;

    printf("Digite o Dia 01:");
    scanf("%d",&Dia1);
    printf("Digite o Mes 01:");
    scanf("%d",&Mes1);
    printf("Digite o Ano 01:");
    scanf("%d",&Ano1);

    printf("Digite o Dia 02:");
    scanf("%d",&Dia2);
    printf("Digite o Mes 02:");
    scanf("%d",&Mes2);
    printf("Digite o Ano 02:");
    scanf("%d",&Ano2);

     if (Dia1 >= Dia2 && Mes1 >= Mes2 && Ano1 >= Ano2) {   
         printf("A primeira data eh mais recete\n");
    }
    else if (Dia1 <= Dia2 && Mes1 <= Mes2 && Ano1 <= Ano2) {
        printf("A Segunda data eh mais recete\n");
    }
    else{
        
    system("PAUSE");
    }
}
