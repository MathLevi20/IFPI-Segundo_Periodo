#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

typedef struct aluno{
	int mat;
	char nome [20];
	aluno *prox;	
}Aluno; 

//inclui o elemento no final da lista
void incluirNoFinal(Aluno e){

}

//inclui o elemento no inicio da lista
void incluirNoInicio(Aluno e){

}


//retorna o elemento se encontrado
//senao encontrado retorna NULL
Aluno procura(int mat){	
	do{
		printf("\n Consulta aluno pelo numero de matricula\n\n");
		
	}
}

//mostra TODOS os elementos da lista
void mostra(){	
atual=inicio;
while(atual != NULL)
	printf("%d",atual->mat);
	printf("%s",atual->nome);
	atual=atual->prox;
}

//remover o elemento da lista, retorna 1 se o elemento for encontrado e removido
//retorna 0 se o elemento nao existir na lista 
//pesquisem sobre como fazer esse metodo.. no video 4 ele nao foi explicado totalmente
int remover(int mat){
	Aluno*atual=inicio;
	Aluno*anterior=NULL;
	while (atual!=NULL){
		if(atual->mat==mat){
			if(atual==inicio)
				inicio= inicio->prox;
			else
				if(atual==fim){
					fim=anterior;
					fim->prox=NULL;
				}	
				else
					anterior->prox=atual->prox;
					free(atual);
					return 1;
		}
		anterior=atual;
		atual=atual->prox;
	}
return 0;
}

//faça um menu no metodo main com as opçoes para as funcoes acima

main(){
Aluno* novo;	
novo = (Aluno*)malloc(sizeof(Aluno));
novo->mat=1;
strcpy(novo->nome,"Joao");
novo->prox=NULL;
remover(mat);


}
	
	
	

