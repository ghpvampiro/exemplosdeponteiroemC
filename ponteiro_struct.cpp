#include <stdio.h>
#include <stdlib.h>


struct dma {
	int dia;
	int mes;
	int ano;
};


main(){
	
	struct dma data1;
	struct dma data2;
	
	struct dma *ptd1;
	struct dma *ptd2;
	
	int i;
	float f;
	
	ptd1 = &data1;
	ptd2 = &data2;
	
	data1.dia = 10;
	data1.mes = 5;
	data1.ano = 1998;
	
	data2.dia = 12;
	data2.mes = 2;
	data2.ano = 2000;
	
	printf("A primeira data eh igual a dia %i, mes %i e ano %i \n", data1.dia,data1.mes,data1.ano);
	printf("A sugunda data eh igual a dia %i, mes %i e ano %i \n", data2.dia,data2.mes,data2.ano);
	
	
	data1.dia = data1.dia - data2.dia;
	
	if (data1.dia < 0){
		
		data1.dia = data1.dia * (-1);
	}
	
	data1.mes = data1.mes - data2.mes;
	
	if (data1.mes < 0){
		
		data1.mes = data1.mes * (-1);
	}
	
	
	data1.ano = data1.ano - data2.ano;
	
	if (data1.ano < 0){
		
		data1.ano = data1.ano * (-1);
	}
	
	
	i = data1.dia;
	
	i += (data1.mes * 30);
	
    i += (data1.ano * 365);
    
    
	printf("A DIFERENCA EM DIAS EH IGUAL A: %i", i);
	
	
	
	
	
		
	
}
