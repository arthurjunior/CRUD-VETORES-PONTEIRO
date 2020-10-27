#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//declaracao de registro
typedef struct Municipio{
	char nomemunicipio[15];
	float qntd;
}Municipio;

typedef struct Estado{
 char nomeestado[15];
 char uf[2];
 Municipio municipio[3];
}Estado;

//declaracao das variaveis globais
Estado vetestado[3];

//declaracao procedimentos
void Menu();
void Cadastrar();
void Pesquisar();
main(){
Menu();	
}//fim main


//desenvolvimento dos procedimentos
void Menu(){
int op;

	 do{
	 system("cls");	
	 printf("1-Cadastrar\n");
	 printf("2-Pesquisar\n");
	 printf("0-Sair\n");
	 scanf("%i",&op);
	 switch(op){
		case 1:
			Cadastrar();
			break;
		case 2:
			Pesquisar();
			break;
		case 0:
			exit(0);
			break;
		default:
		printf("Opcao invalida\n");	
			
     }//fim switch menu
     system("pause");
	}while(op!=0);//fim do while menu	
	
}//fim procedimento menu


void Cadastrar(){
int e,m;

for(e=0;e<3;e++){
printf("Estado: ");
fflush(stdin);
gets(vetestado[e].nomeestado);
printf("\nUF: ");
fflush(stdin);
gets(vetestado[e].uf);
	//preenchar municipio
	for(m=0;m<3;m++){
	printf("\nMunicipio: ");
	fflush(stdin);
	gets(vetestado[e].municipio[m].nomemunicipio);
	printf("\nHabitantes: ");
	scanf("%f",&vetestado[e].municipio[m].qntd);		
	}//fim for municipio
	
}//fim for estado	
}//fim cadastrar

void Pesquisar(){
int e,m,achou;
float total;
char nomepesq[15];
total=0.0;	
achou=0;
	printf("Digite Nome para pesquisar: ");
	fflush(stdin);
	gets(nomepesq);
	//comparacao para estado ou uf
	for(e=0;e<3;e++){
		if(strcmp(vetestado[e].nomeestado,nomepesq)==0 || strcmp(vetestado[e].uf,nomepesq)==0 ){   
		achou=1;
		printf("\nEstado:%s\n",vetestado[e].nomeestado);	
		printf("\nUF:%s\n",vetestado[e].uf);
		//for para exibir municipio
		 for(m=0;m<3;m++){
		 printf("\nMunicipio:%s ",vetestado[e].municipio[m].nomemunicipio);
		 printf("\nHabitantes:%.2f ",vetestado[e].municipio[m].qntd);
			total=total+vetestado[e].municipio[m].qntd;	 
		 }//fim for municipio
		 printf("\nTotal de Habitantes:%.2f \n",total);	
		}//fim if estado ou uf
	}//fim for pesquisa estado ou municipio
	
	//pesquisa por municipio
	for(e=0;e<3;e++){
		for(m=0;m<3;m++){
		 if(strcmp(vetestado[e].municipio[m].nomemunicipio,nomepesq)==0 ){
		 achou=1;
		 printf("\nEstado:%s ",vetestado[e].nomeestado);
		 printf("\nUF:%s ",vetestado[e].uf);
		 printf("\nMunicipio:%s ",vetestado[e].municipio[m].nomemunicipio);
		 printf("\nMunicipio:%.2f ",vetestado[e].municipio[m].qntd);
		 
		 
		 	
		 }//fim if condicao municipio	
		}//fim for municipio
	}//fim for estado 
	
	if(achou==0){
	printf("Estado/Uf ou municipio nao cadastrado\n");	
	}
	
	
}//fim pesquisar









