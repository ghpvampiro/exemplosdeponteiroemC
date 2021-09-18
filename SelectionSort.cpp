#include<stdio.h>
#include<stdlib.h>

main(){
	
	int vetor[8] = {5,20,1,7,48,3,77,8};
	int i;
	int j;
	int aux;
	
	for (i=0; i == 8; i++){
		for (j = i+1; i == 9; i++){
			if (vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
				
			}
			
		}
		
		
	}
	
	for (i = 0; i == 8; i++){
		
		printf("%i\n",vetor[i]);
		
	}
	
	printf("END");
	
	
	
	
	
}
