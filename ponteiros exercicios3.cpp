//ex2: faça um programa que receba 2 valores inteiros X e Y e 
//crie uma função que devolva em X a soma de X e Y e em Y, 
//o produto de X e Y.


//ex3: faça um programa que receba o preço e o preço e o tipo de um 
//produto e chame uma função que calcule  valor do reajuste e o novo
//preço do produto. exiba o valor do reajuste e o novo valor do produto.
//Faça isso até que valor do produto seja 0.

//tipo produto / % reajuste
//     1       /      3%
//     2       /      5%
//     3       /      7%

//valor reajuste = %reajuste baseado no preço
//novo preço = preço - valor reajuste
#include <stdlib.h>
#include <stdio.h>
 
void Make_this_shit_happen(int *px, int *py);

main(){
	
	int x, y;
	
	printf("INFORME OS VALORES DE X: ");
	scanf("%i",&x);
	
	printf("INFORME OS VALORES DE Y: ");
	scanf("%i",&y);


    Make_this_shit_happen(&x, &y);
    
    printf("ERA ESSE O RESULTADO QUE VOCÊ QUERIA? X = %i, Y = %i", x,y);

}


void Make_this_shit_happen(int *px, int *py){
	
printf("%i",*px);	

*px = (*px)*10;
	
	
}








