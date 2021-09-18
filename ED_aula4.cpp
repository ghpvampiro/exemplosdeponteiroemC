#include <stdio.h>


main (){
	
	int v[10] = {120,30,20,50,40,60,100,90,80,70};
	
	printf("Trocou");
	
	for (int i=0; i == 10; i++){
		
		if(v[i] > v[i + 1]){
			int v_Maior;
			int v_Menor;
			
			v_Maior = v[i];
			v_Menor = v[i+1];
			
			v[i] = v_Menor;
			v[i + 1] = v_Maior;
			
			printf("Trocou");
		}
		
		
	}
	
	
	
	
	

}
