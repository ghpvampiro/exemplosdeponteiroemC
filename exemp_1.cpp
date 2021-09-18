#include <iostream> //biblioteca padrão

using namespace std;

int main(int argc, char ** argv)
//argc e argv = argumentos
{
    /*int x;
    long y;
    short int z[10];*/
    short int a[2][2][2];
    
   /* cout << "tamanho de x:" << sizeof(x) <<endl;//sizeof() -> tamanho de() = tamanho do tipo da variavel
    cout << "Posicao de x na memoria:" << &x << endl;//& = posição da memoria da variavel
    cout << hex << &x << endl;
    cout << endl;
    
    //endl -> end line = \n
    //cout -> c out = printf
    
    cout << "tamanho de y:" << sizeof(y) <<endl;
    cout << "Posicao de y na memoria:" << &y << endl;
    cout << hex << &y << endl;
    cout << endl;
    
    for(int cont=0;cont<10;cont++)// em c++ se vc declarar uma variacel em uma função ( exemplo "for") essa varialvel só vai existir quando a função for executada
    {
    	cout << "tamanho de z"<< cont <<":" << sizeof(z[cont]) <<endl;
   		cout << "Posicao de z na memoria:" << &z[cont] << endl;
    	cout << hex << &z[cont] << endl;
    	cout << endl;
	}*/
	
	for(int x =0 ; x<2 ; x++)
	{
		for(int y=0; y<2 ; y++)
		{
			cout << "elemento[" << x << "]["<< y << "]="
			cout << &a[x][y] << "->" << sizeof(a[x][y]) << endl;
		}
	}
    exit(0);
}
