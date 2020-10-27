#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Endereco{
	char bairro[10];
	char rua[10];
	char casa[10];
}Endereco;

typedef struct Cliente{
	char nome[10];
	int cnh;
	Endereco end;
}Cliente;

typedef struct Carro{
	char modelo[12];
	char cor[12];
	char placa[10];
	int ano;
	float vd;
	char status[10];	
}Carro; 


main(){
int op,cnhpesq,ec,diaria;
float total;
char placapesq[10];	
Carro vetcar[3];
Cliente vetcli[3];	
	
	do{
	system("cls");	
	printf("1-Cadastrar carro\n");
	printf("2-Cadastrar cliente\n");
	printf("3-Realizar aluguel\n");
	printf("4-Finalizar aluguel\n");
	printf("0-Sair\n ");	
	scanf("%i",&op);
	 
	 switch(op){
		case 1:
			
		 for(int i=0;i<3;i++){
			printf("Modelo: ");
			fflush(stdin);
			gets(vetcar[i].modelo);
			printf("\nCor: ");
			fflush(stdin);
			gets(vetcar[i].cor);
			printf("\nPlaca: ");
			fflush(stdin);
			gets(vetcar[i].placa);
			printf("\nAno: ");
			scanf("%i",&vetcar[i].ano);
			printf("\nValor diaria: ");
			scanf("%f",&vetcar[i].vd);
			strcpy(vetcar[i].status,"livre");//inicializando status livre para o carro
		 } //fim for para cadastro carro
			break;//fim case 1	
		case 2:
		 for(int i=0;i<3;i++){
		  printf("Nome: ");
		  fflush(stdin);
		  gets(vetcli[i].nome);	
		  printf("\nCNH: ");
		  scanf("%i",&vetcli[i].cnh);
		  printf("/nBairro: ");
		  fflush(stdin);
		  gets(vetcli[i].end.bairro);	
		  printf("/nRua: ");
		  fflush(stdin);
		  gets(vetcli[i].end.rua);
		  printf("/nCasa: ");
		  fflush(stdin);
		  gets(vetcli[i].end.casa);	
		  	  	
		 }//fim for para cadastro do cliente	
			break;//fim case 2	
		case 3:
			printf("Digite nuero da CNH: ");
			scanf("%i",&cnhpesq);
			printf("\n");
			for(int i=0;i<3;i++){
			 if(vetcli[i].cnh==cnhpesq){
			 	for(int c=0;c<3;c++){
				  if(strcmp(vetcar[c].status,"livre")==0){
				  	printf("%i - Modelo:%s - Valor:%.2f\n",c,vetcar[c].modelo,vetcar[c].vd);
				  }//fim condicao de exibir carros livres
				 }//fim for para exibir carros
				scanf("%i",&ec);
				printf("\nQuantas diarias: ");
				scanf("%i",&diaria);
			
			//calculo valor total
			total= vetcar[ec].vd*diaria;	
			
			printf("\nValor total do aluguel:%.2f ",total);
			
			strcpy(vetcar[ec].status,"alugado");	 
			 }//fim condicao cnh	
			}//fim for para comparar cnh
			break;	
		case 4:
			printf("Digite a placa: ");
			fflush(stdin);
			gets(placapesq);
			
			for(int i=0;i<3;i++){
			 if(strcmp(vetcar[i].placa,placapesq)==0){
			 	strcpy(vetcar[i].status,"livre");
			 	printf("Veiculo devolvido com sucesso\n");
			 	system("pause");
			 }//fim if para comparar as placas	
			}//fim fot
			break;	
		case 0:
			exit(0);
			break;
	
		default:
		printf("Opcao invalida\n");							
	 }//fim switch
	}while(op!=0);	
	
system("pause");	
}//fim main 











