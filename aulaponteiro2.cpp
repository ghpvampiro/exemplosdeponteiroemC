#include <stdio.h>

main(){
	int x = 10;  //x = 10
		
	int *ponteiro; //declara��o do ponteiro
	
	ponteiro = &x; //local do ponteiro = local da memoria de x
	
	int y = 20; //declara��o de int y e atribui��o do valor 20 
	
	*ponteiro = 20; //conte�do do ponteiro � igual a 20
	
	printf("%i %i\n",x,y);  //exibe o valor de x e y. � poss�vel notar que o valor de x foi alterado de 10 para 20

	
	
	
	
	
}
