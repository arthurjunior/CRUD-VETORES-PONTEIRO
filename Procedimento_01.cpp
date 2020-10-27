#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//declaracao de variaveis globais
int a;

//declaracao procedimentos
void Menu();
void Cadastrar();
void Imprimir();
void Pesquisar();
main(){
	Menu();
system("pause");	
}//fim main

//procedimentos
void Menu(){
int op;
//chamar ou executar procedimento 

do{
 printf("1-Cadastrar numero\n");
 printf("2-Pesquisar\n");
 printf("3-Imprimir\n");
 printf("0-Sair\n");
 scanf("%i",&op);
 switch(op){
 	case 1:
 		Cadastrar();
 		break;
	case 2:
		Pesquisar();
 		break;
 	case 3:
 		Imprimir();
 		break;
	case 0:
		exit(0);
 		break;	 	
	default:
	printf("Opcao invalida\n");	
 }//fim switch				
}while(op!=0);
	
	
}//fim menu
void Cadastrar(){
printf("Digite numero: ");
scanf("%i",&a);	

}//fim cadastrar

void Imprimir(){
printf("\nNumero digitado: %i \n",a);	
}//fim imprimir

void Pesquisar(){
int aux;
printf("Digite numero para pesquisar: ");
scanf("%i",&aux);
if(aux==a){
printf("\nNumero : %i Cadastrado\n",a);
}else{
printf("\nNumero nao cadastrado\n");	
}
}//fim pesquisar



