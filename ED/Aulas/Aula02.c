#include <stdio.h>
main()
{
    float n1, n2, n3, media;
    printf("Digite 3 notas:");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("%f", media);
    printf("a media é %0.2f", media);

    system("PAUSE");
}