/*(17)Imprimir los 100 primeros números de Fibonacci. Recuerde que un número de Fibonacci se calcula como
la suma de los dos anteriores así: 0, 1, 1, 2, 3, 5, 8, 13…*/
#include<iostream>
using namespace std;

int main()
{
	int i;
	long long int a = 0, b = 1, c;
	cout<<"\n100 primeros numeros de fibonacci.\n\n";
	
	for(i = 1; i <= 100; i++)
	{
		cout<<a<<", ";
		c = a+b;
		a = b;
		b = c;
	}
	
	return 0;
}

