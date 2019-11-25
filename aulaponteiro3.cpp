#include <stdio.h>

main(){
	int x = 10;
	
	int *ponteiro1, *ponteiro2;
	ponteiro1 = &x;
	ponteiro2 = ponteiro1;
	printf("%i\n",*ponteiro1);
	(*ponteiro1)++;
	printf("%i\n",*ponteiro1);
	(*ponteiro2)++;  
	printf("%i\n",x); //x = ? endereço de x na memória
	
	 
	
	
	
	
}
