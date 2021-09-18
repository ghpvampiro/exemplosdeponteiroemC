#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char ** argv){
	
	int size;
	int *vect;
	
	cin >> size;
	
	vect = new int[size];
	
	for (int x = 0; x < size; x++)
	{
		vect[x] = 0;
		
	}
	
	cout << "Tamanho do vetor: " << sizeof(vect) * size;

	
	
}
