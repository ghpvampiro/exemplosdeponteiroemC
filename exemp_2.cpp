#include <iostream> //biblioteca padrão

using namespace std;

int main(int argc, char ** argv)
{
	struct Test
	{
		short s;
		int i;
		long l;
	}test;
	
	cout<<"Struct = "<<&test<<" -> ";
	cout<<sizeof(test)<<endl;
	
	cout<<"Short = "<<&test.s<<" -> ";
	cout<<sizeof(test.s)<<endl;
	
	cout<<"int = "<<&test.s<<" -> ";
	cout<<sizeof(test.i)<<endl;
	
	cout<<"Long = "<<&test.s<<" -> ";
	cout<<sizeof(test.l)<<endl;
	exit(0);
}
