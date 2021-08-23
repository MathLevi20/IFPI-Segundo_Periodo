#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
    float n1, n2, n3, media;
    printf("Digite 3 notas:");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("a media eh ....:%0.2f\n\n",media);

    system("PAUSE");
}