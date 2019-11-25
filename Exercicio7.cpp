#include <stdlib.h>
#include <stdio.h>

float f_calc_s (int max);

main()
{
int x = 0;
float s = 0;

printf("informe o valor de x: ");
scanf("%d",&x);

s = f_calc_s(x);
printf("O valor de s eh %f",s);
}

float f_calc_s (int max)
{
	float res=0;
	for (int n=1; n<=max; n++)
	{
		res=res+ (((n*n)+1)/(n+3));
		
	}
	return res;
	
}
