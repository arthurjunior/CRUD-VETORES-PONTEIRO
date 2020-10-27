#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct aluno{
	char nome[10];
	int mat;
	int an;
}Aluno;


void Cadastrar(Aluno *pa, Aluno *pa2);
void Imprimir(Aluno aluno1,Aluno aluno2);
void Alterar(Aluno *pa1,Aluno *pa2);
main(){
int op;
Aluno  aluno1,aluno2;
	
	do{
	system("cls");
	system("title CRUD");
		
	printf("1-Cadastrar\n");
	printf("2-Pesquisar\n");
	printf("3-Alterar\n");
	printf("4-Excluir\n");
	printf("5-Exibir\n");
	printf("0-Sair\n");
	scanf("%i",&op);
	switch(op){
	case 1:
		Cadastrar(&aluno1,&aluno2);
		break;	
	case 2:
		break;	
	case 3:
		Alterar(&aluno1,&aluno2);
		break;	
	case 4:
		break;	
	case 5:
		Imprimir(aluno1,aluno2);
		break;	
	
	case 0:
		exit(0);
		break;	
	default:
	printf("Opcao invalida\n");	
	}
	system("pause");	
	}while(op!=0);
	
}//fim main



void Cadastrar(Aluno *pa, Aluno *pa2){
Aluno aux;
	
	printf("Nome: ");
	fflush(stdin);
	gets(pa->nome);
	printf("\nAno Nascimento: ");
	scanf("%i",&pa->an);
	printf("\nMatricula: ");
	scanf("%i",&pa->mat);
	
	//entrada de dados 2
	printf("Nome: ");
	fflush(stdin);
	gets(pa2->nome);
	printf("\nAno Nascimento: ");
	scanf("%i",&pa2->an);
	printf("\nMatricula: ");
	scanf("%i",&pa2->mat);
		
}//fim cadastrar

void Imprimir(Aluno aluno1,Aluno aluno2){
	printf("Dados aluno 1\n");
	printf("Nome:%s\n",aluno1.nome);
	printf("Ano nascimento:%i\n",aluno1.an);
	printf("Matricula:%i\n",aluno1.mat);
	
	printf("Dados aluno 2\n");
	printf("Nome:%s\n",aluno2.nome);
	printf("Ano nascimento:%i\n",aluno2.an);
	printf("Matricula:%i\n",aluno2.mat);
	
	
}

void Alterar(Aluno *pa1,Aluno *pa2){
int pesqmat,op;


printf("Digite matricula: ");
scanf("%i",&pesqmat);

if(pesqmat == pa1->mat){
printf("Qual dado desejar alterar\n");	
printf("1-Nome\n");
printf("2-Ano nascimento\n");
printf("3-Matricula\n");
scanf("%i",&op);
switch(op){
case 1:
	printf("Nome: ");
	fflush(stdin);
	gets(pa1->nome);
	break;	
case 2:
	printf("Ano nascimento: ");
	scanf("%i",&pa1->an);
	break;	
case 3:
	printf("Matricula: ");
	scanf("%i",&pa1->mat);
	
	break;	
	
}//fim switch
}else if(pesqmat==pa2->mat){
printf("Qual dado desejar alterar\n");	
printf("1-Nome\n");
printf("2-Ano nascimento\n");
printf("3-Matricula\n");
scanf("%i",&op);
switch(op){
case 1:
	printf("Nome: ");
	fflush(stdin);
	gets(pa2->nome);
	break;	
case 2:
	printf("Ano nascimento: ");
	scanf("%i",&pa2->an);
	break;	
case 3:
	printf("Matricula: ");
	scanf("%i",&pa2->mat);
	
	break;	
	
}//fim switch
}else{
printf("Aluno nao cadastrado\n");	
}

	
	
}//fim alterar










































