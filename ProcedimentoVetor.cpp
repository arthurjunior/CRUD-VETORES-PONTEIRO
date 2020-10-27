#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void Cadastrar(int vet[],int tam);
void Imprimir(int vet[],int tam);

main(){
int vet[3];

Cadastrar(vet,3);	
Imprimir(vet,3)	;
	
}


void Cadastrar(int vet[],int tam){
int i;

	for(i=0;i<tam;i++){
	printf("Digite Numero: ");
	scanf("%i",&vet[i]);	
	}//fim for vetor	
}//fim cadastrar

void Imprimir(int vet[],int tam){
	
	for(int i=0;i<tam;i++){
	printf("%i\n",vet[i]);
	}
	
	
}//fim imprimir






