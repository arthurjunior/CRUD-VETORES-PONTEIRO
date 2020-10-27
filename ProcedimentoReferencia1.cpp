#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Cadastrar(int *p1,int *p2);
void Exibir(int a,int b);
main(){
int a,b,op;
	
do{
 system("title Censo");
 system("color 1f");
 system("cls");
 	
 printf("1-Cadastrar\n");
 printf("2-Exibir\n");
 printf("0-Sair\n");
 
 scanf("%i",&op);
 switch(op){
 	case 1:
 		Cadastrar(&a,&b);
 		break;
 	case 2:
 		Exibir(a,b);
 		break;
 	case 0:
 		exit(0);
 		break;
 		
 	default:
	system("color 40");
 	printf("Opcao invalida\n");	
	system("pause");
 
 }	
 system("pause");
 
}while(op!=0);


}//fim main


void Cadastrar(int *p1,int *p2){
int aux1,aux2;	
	
	printf("Numero 1: ");
	scanf("%i",&aux1);
	printf("\nNumero 2: ");
	scanf("%i",&aux2);
	
	*p1=aux1;
	*p2=aux2;
}//fim cadastro

void Exibir(int a,int b){
	printf("Numero 1: %i ",a);
	printf("Numero 2: %i ",b);
	
	
	
	
}//fim exibir



