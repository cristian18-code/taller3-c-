/*Programa que lea dos números por teclado y muestre el resultado de la división del primer
número por el segundo. Se debe comprobar que el divisor no puede ser cero.*/
#include<iostream>
using namespace std;

int main()
{
	int numero, divisor, resultado;
	cout<<"                  Programa para realizar una division.\n\n";
	cout<<"Digite el numero a dividir: ";
	cin>> numero;
	
	cout<<"Digite el numero divisor: ";
	cin>> divisor;
	
	if(divisor != 0){
		resultado = numero/divisor; 
		cout<<"El resultado de la division "<< numero<< "/"<< divisor<< " es: "<<resultado<<endl;
	}
	else{
		cout<<"ERROR. El divisor no puede ser 0.\n";
	}
	
  return 0;
}

