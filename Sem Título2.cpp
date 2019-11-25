#include <stdio.h>
#include <stdlib.h>

main(){
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

/* size of `array` in bytes */
int size = sizeof(array);

/* number of elements in `array` */
size_t n = sizeof(array)/sizeof(array[0]);

printf("O NUMERO DE PESSOAS NO ARRAY EH %i \n", n);
	
	
	
}
