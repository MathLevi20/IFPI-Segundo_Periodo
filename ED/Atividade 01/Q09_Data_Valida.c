#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia uma data (dia, mês e ano), verifique e escreva se a data é ou não válida.*/

main()
{
    int Dia,Mes,Ano;

    printf("Digite o Dia:");
    scanf("%d",&Dia);
    printf("Digite o Mes:");
    scanf("%d",&Mes);
    printf("Digite o Ano:");
    scanf("%d",&Ano);
    
    if (Ano >= 0 && Ano <= 9999)
        {
            if (Mes >= 1 && Mes <= 12)
        {
                if ((Dia >= 1 && Dia <= 31) && (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes == 10 || Mes == 12))
                printf("Data eh valida.\n");
                else if ((Dia >= 1 && Dia <= 30) && (Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11))
                printf("Data eh valida\n");
                else if ((Dia >= 1 && Dia <= 28) && (Mes == 2))
                printf("Data eh valida\n");
                else if (Dia == 29 && Mes == 2 && (Ano % 400 == 0 || (Ano % 4 == 0 && Ano % 100 != 0)))
                printf("Data eh valida\n");
                else
                printf("Dia eh invalido\n");
        }
        else
        {
            printf("Mes eh invalido\n");
        }
    }
    else
    {
        printf("Ano ehinvalido.\n");
    }

    system("PAUSE");
}