#include <iostream>
#include <stdio.h>

int main(int argc, char ** argv){
	
	using namespace std;
	//variaveis
	//Escalares Dinamicas
	
	
	int *ptr_x; //armazena endere�o de memoria
	
	//variaveis est�ticas
	
	int y; 
	
	//entrada de dados
	cin >> y;
	
	//operador de endere�os de memoria
	
	ptr_x = &y;
	
	cout << hex << &y << "(" << ptr_x << ")" << endl;
	cout << y << "(" << *ptr_x << ")" << endl;
	
	
	//aloca��o din�mica
	
	ptr_x = new int;
	
}
