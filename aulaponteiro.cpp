#include <stdio.h>

main(){
	int x;
	
	x= 10;
	
	int *ponteiro;
	ponteiro = &x;
	
	
	printf("%i\n",x);  //x = 10
	printf("%i\n",&x); //x = ? endereço de x na memória 
	
	printf("%i\n", *ponteiro);
	
	printf("%i\n", ponteiro);
	
	
	
	
	
}
