 #include <stdio.h>
/*Leia um número inteiro (3 dígitos), calcule e escreva a soma de seus elementos (C + D + U).*/
main()

{
int Numero,resto,Soma;

printf("Digite um numero com 3 digitos:");
scanf("%d",&Numero);
Soma=0;

while (Numero>0)
{
resto=Numero%10;
Numero=(Numero-resto)/10;
Soma=Soma+resto;
}

printf("O soma é %d \n",Soma);

}