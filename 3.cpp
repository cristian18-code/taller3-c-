/* Escriba un programa que lea temperaturas expresadas en grados Fahrenheit y las convierta a grados Celsius mostrándola. 
El programa finalizará cuando lea un valor de temperatura igual a 999.*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double  fahrenheit = 1, celsius = 0;
	
	cout<<"                    Programa para transformar temperaturas fahrenheit a grados celsius.\n\n";

	do{
		
			cout<<"Digite la temperatura en grados Fahrenheit: ";
  		    cin>> fahrenheit;
  		
  			celsius = (5.0/9.0)*(fahrenheit - 32);	
			
			cout<<"la temperatura "<< fahrenheit<< " F convertida a grados celsius es: "<< celsius<< "C.\n";
		
		
	}while(fahrenheit != 999);
   
  	return 0;
}

