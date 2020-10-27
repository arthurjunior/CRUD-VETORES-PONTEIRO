#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){

int *p,a=10;	
//inicializacao de ponteiro
p=&a;

		
printf("Conteudo de A:%i \n",a);
printf("Endereco de A:%x \n",&a);

printf("Conteudo de A pelo PONTEIRO:%i \n",*p);
printf("Endereco de A pelo PONTEIRO:%x \n",p);
printf("Endereco do PONTEIRO:%x \n",&p);
//atribuindo valor de A pelo ponteiro
*p=50;
printf("Conteudo de A:%i \n",a);
		
}//fim main 
