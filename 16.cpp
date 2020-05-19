/*(16).Imprimir un listado con los números impares desde 1 hasta 999 y seguidamente otro listado con los
números pares desde 2 hasta 1000.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int i;
	cout<<"\nListado con los numeros impares hasta 999 y seguidamente los numeros pares hasta 1000.\n\n";
	
	cout<<"         Numeros impares\n";
	system("pause");
	
	for(i = 1; i < 1000; i++)
	{
		if(i % 2 != 0)
		{
			cout<<i<<endl;
		}
	}
	
	system("pause");
	system("cls");
	cout<<"         Numeros Pares\n";
	system("pause");
	
	for(i = 1; i <= 1000; i++)
	{
		if(i % 2 == 0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}

