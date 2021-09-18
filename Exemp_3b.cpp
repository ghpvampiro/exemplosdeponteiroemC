#include <iostream>
#include <stdio.h>

int main(int argc, char ** argv){
	
	using namespace std;

	
	int *ptr_x; 
	
	
	
	ptr_x = new int;
	
	cin >> *ptr_x;
	
	cout << hex << ptr_x << "(" << dec << *ptr_x;
	cout << ")" << endl;
	
	
	cin >> *ptr_x;
}
