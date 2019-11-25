//Exercicios Ponteiro
#include <stdio.h>

main(){
	int x = 11;
	float y = 222.555;
	char z = 'A';
	
	printf("%i %f %i \n",x,y,z);
	
	int *ponteiro1;
	float *ponteiro2;
	char *ponteiro3;
	
	printf("%i %f.0 %i \n",*ponteiro1,*ponteiro2,*ponteiro3);
	
		
    ponteiro1 = &x;
    ponteiro2 = &y;
    ponteiro3 = &z;	
    
    printf("%i %.0f %i \n",*ponteiro1,*ponteiro2,*ponteiro3);
    

	*ponteiro2 = 15;
	*ponteiro3 = 'K';
	*ponteiro1 = 250;
	
	printf("%i %f %i \n",x,y,z);
	
	
}
