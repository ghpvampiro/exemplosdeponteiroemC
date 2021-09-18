#include <iostream>
#include <stdio.h>

int main(int argc, char ** argv){
	
	using namespace std;
	//variaveis
	//Escalares Dinamicas
	
	
	int *ptr_x; //armazena endereço de memoria
	
	//variaveis estáticas
	
	int y; 
	
	//entrada de dados
	cin >> y;
	
	//operador de endereços de memoria
	
	ptr_x = &y;
	
	cout << hex << &y << "(" << ptr_x << ")" << endl;
	cout << y << "(" << *ptr_x << ")" << endl;
	
	
	//alocação dinâmica
	
	ptr_x = new int;
	
}
