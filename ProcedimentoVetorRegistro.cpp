#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//constante
#define TAM 3


typedef struct aluno{
	char nome[10];
	int mat;
}Aluno;

void Cadastrar(Aluno aluno[],int tam);
void Imprimir(Aluno aluno[],int tam);

main(){
Aluno vet[TAM];	
	
Cadastrar(vet,TAM);
Imprimir(vet,TAM);	
}//



void Cadastrar(Aluno aluno[],int tam){
  for(int i=0;i<TAM;i++){
  	printf("Nome: ");
  	fflush(stdin);
  	gets(aluno[i].nome);
  	printf("\nMatricula: ");
  	scanf("%i",&aluno[i].mat);
  }
	
}//fim cadastrar

void Imprimir(Aluno aluno[],int tam){
	
	for(int i=0;i<tam;i++){
	printf("Nome:%s\n",aluno[i].nome);
	printf("Matricula:%i\n",aluno[i].mat);
		
	}
	
}









