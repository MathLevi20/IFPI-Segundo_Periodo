#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Leia uma letra e verifique se a letra digitada é vogal ou consoante.*/

main()
{
    char letra;
    printf("Escreva uma Letra:");
    scanf("%c",&letra);
    
    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i'
       || letra == 'I' || letra == '0' || letra == 'O' || letra == 'u' || letra == 'U')
        printf("eh Vogal\n");
    
    else
        printf("eh Consoante\n");
    
    system("PAUSE");
}