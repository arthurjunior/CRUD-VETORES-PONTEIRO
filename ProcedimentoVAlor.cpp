#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void Cadastrar(int c,int d);
void Exibir(int e,int f);


main(){
int a,b;
	
	Cadastrar(a,b);
	
}//fim main


void Cadastrar(int c,int d){
	printf("Digite numero 1: ");
	scanf("%i",&c);
	printf("\nDigite numero 2: ");
	scanf("%i",&d);
	Exibir(c,d);
	
}//fim cadastrar

void Exibir(int e,int f){
	printf("Numero 1: %i\n",e);
	printf("Numero 2: %i\n",f);
		
}//fim exibir
