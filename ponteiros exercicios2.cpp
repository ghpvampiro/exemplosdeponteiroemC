///exemplo ponteiro 
#include <stdlib.h>
#include <stdio.h>

void calcula_hora(int *pmin, int *phora);

main(){

int min, hora;

printf("Informe a quantidade de minutos: ");
scanf("%i",&min);

calcula_hora(&min, &hora);

printf("Hora = %i, Minutos = %i", min,hora);

}

void calcula_hora (int *pmin, int *phora){
	
	*phora = *pmin/60;
	
	*pmin = *pmin%60;
	
}
