#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia o turno em que um aluno estuda, sendo M para matutino, V para Vespertino ou N para Noturno e
escreva a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.*/

main()
{
    char Turno;
    printf("Qual o turno:");
    scanf("%c",&Turno);
    
    if(Turno == 'M'|| Turno == 'm')
        printf("Bom Dia\n");
    else if(Turno == 'T'|| Turno == 't')
        printf("Boa Tarde\n");
    else if(Turno == 'N'|| Turno == 'n')
        printf("Boa Noite\n");
    
    system("PAUSE");
}