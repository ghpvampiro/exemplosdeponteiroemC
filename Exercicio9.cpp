#include <stdlib.h>
#include <stdio.h>
#define max 10

void f_procura (int vec[],int tam,int num);


main()
{
	int vector [max],x;
	for (int i=0; i < max; i++)
	{
		printf("informe um numero para o vetor: ");
		scanf("%d",&vector[i]);
		
	}
	
	printf("Informe um numero qualquer: ");
	scanf("%d",&x);
	
	f_procura(vector,max,x);
	
}

void f_procura (int vec[],int tam,int num)
{
	bool b;
	for (int i = 0; i<tam; i++)
	{
		if (vec[i] == num)
		{
			printf("achou na posicao: %d:!",i);
			b = true;
		} 
		else if (!b)
		{
			printf("Nao achou!!!");
		}
		
	}
	
	
}












