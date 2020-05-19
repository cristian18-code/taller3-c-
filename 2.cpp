// 2. Dado un número entero, determinar si es primo o no.
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
	int numero, primo;
	cout<<"                  Programa para determinar si un numero es primo.\n\n";
   	cout<<"Por favor digite el numero a evaluar: ";
   	cin>> numero;
   	
   	for(int i = 1; i <= numero; i++){
			if(numero%i == 0){
				primo++;
			}   
   	  }
   
     if(primo == 2){
     	cout<<"El numero: "<< numero<< " Es  primo.\n"<<endl; 	
     }
     else{
     	cout<<"El numero: "<< numero<< " no es  primo.\n"<<endl;
     }
     
  return 0;
}

