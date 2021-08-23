#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia duas notas de um aluno e escreva na tela a palavra “Aprovado” se a média das duas notas for maior
ou igual a 7,0. Caso a média seja inferior a 7,0, escreva “O Aluno deve fazer a prova final!” e o
programa deve ler a nota da prova final e calcule a média final. Se a média final for maior ou igual a
6,0, o programa deve escrever “Aprovado!”, caso contrário deve escrever “Reprovado!”.*/

main()
{
    float Nota01,Nota02,ProvaFinal,resultado,Mediafinal;
    printf("Primeira Nota:");
    scanf("%f", &Nota01);
    printf("Segunda Nota:");
    scanf("%f", &Nota02);
    resultado=(Nota01+Nota02)/2;
    
    if(resultado >= 7){
        printf("Aprovado||Media:%0.2f\n",resultado);
    }
    else if(resultado <7){
        printf("O Aluno deve fazer a prova final!|| Media:%0.2f\n",resultado);     
       
        printf("Nota da Prova Final:");
        scanf("%f", &ProvaFinal);
        Mediafinal=(resultado+ProvaFinal)/2;
            if (Mediafinal >=6){
                printf("Aprovado!||Media:%0.2f\n",Mediafinal);  
                }
                    else{
                    printf("Reprovado!||Media:%0.2f\n",Mediafinal);   
                    }
        
    }


    system("PAUSE");
}