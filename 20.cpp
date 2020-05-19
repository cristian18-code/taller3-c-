//(20). Leer un dato y almacenarlo en la variable n. Calcular el valor de 2 elevado a la potencia n.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num, potencia;
	cout<<"Calcular el valor de 2 elevado a la potencia ingresada por el usuario.\n\n";
	cout<<"Ingrese el exponente: ";  cin>>num;
	
	potencia = 	pow(2,num);
	
	cout<<"2 elevado a la "<<num<<" es igual a: "<<potencia;
}
