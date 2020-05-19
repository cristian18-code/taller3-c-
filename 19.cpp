//(19). Leer 20 números y encontrar el mayor y el menor valor leídos.
#include<iostream>
using namespace std; 

int main()
{
	float mayor, menor = 999, numero;
	cout<<"Encontrar el mayor y menor numero de 20 numeros introducidos por el usuario.\n\n";
	
	for(int i = 1; i <= 20; i++)
	{
		cout<<"("<<i<<") Digite un numero: "; cin>>numero;
		
		if(numero >= mayor)
		{
			mayor = numero;
		} 
		else if(numero <= menor)
		{
			menor = numero;
		}
	}
	cout<<"El numero mayor es: "<<mayor<<" y el numero menor es: "<<menor<<endl;
}
