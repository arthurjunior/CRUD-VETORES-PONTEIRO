#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
int a,*p;	
//atribuir endereco valido ao ponteiro
p=&a;
	
a=10;	
	
printf("Valor A:%i\n",a);
printf("Endereco A:%x\n",&a);

printf("Valor A pelo PONTEIRO:%i\n",*p);
printf("Endereco A pelo PONTEIRO::%x\n",p);
printf("Endereco PONTEIRO::%x\n",&p);

*p=50;

printf("Valor A alterado pelo ponteiro:%i\n",a);







	
}//ffim main
