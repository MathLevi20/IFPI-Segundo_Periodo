#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
    float base, altura, area;
    printf("Digite a base do triangulo:");
    scanf("%f",&base);
    printf("Digite a alturae do triangulo:");
    scanf("%f",&altura);
    area = (base*altura) / 2;
    printf("a media eh ....:%0.2f\n\n",area);

    system("PAUSE");
}