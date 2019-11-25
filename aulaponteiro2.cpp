#include <stdio.h>

main(){
	int x = 10;  //x = 10
		
	int *ponteiro; //declaração do ponteiro
	
	ponteiro = &x; //local do ponteiro = local da memoria de x
	
	int y = 20; //declaração de int y e atribuição do valor 20 
	
	*ponteiro = 20; //conteúdo do ponteiro é igual a 20
	
	printf("%i %i\n",x,y);  //exibe o valor de x e y. É possível notar que o valor de x foi alterado de 10 para 20

	
	
	
	
	
}
