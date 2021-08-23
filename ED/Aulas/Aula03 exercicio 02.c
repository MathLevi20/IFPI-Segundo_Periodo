#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main()
{
    float x1,y1,x2,y2,parte1,parte2,distancia;
    printf("Digite o ponto P:");
    scanf("%f%f",&x1,&y1);
    printf("Digite o ponto q:");
    scanf("%f%f",&x2,&y2);
    parte1= pow((x2-x1),2);
    parte2= pow((y2-y1),2);
    distancia=sqrt(parte1+parte2);
    printf("A distancia eh:%0.2f\n\n",distancia);

    system("PAUSE");
}