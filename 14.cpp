/*. Algoritmo que me permita calcular el porcentaje de hombres, de mujeres y de ni�os
de un n�mero cualquiera de personas (se debe pedir el n�mero de personas, el n�mero de hombres, el n�mero de
mujeres y el n�mero de ni�os), enviar el porcentaje de hombres, de mujeres y de ni�os por pantalla.
*/
#include<iostream>
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int NumHombres, NumMujeres, NumPersonas, NumNinios;
	float PorHombres, PorNinios, PorMujeres;
	cout<<"Programa para determinar el porcentaje de personas en un espacio.\n\n";
	cout<<"Ingrese el numero de personas: "; cin>>NumPersonas; 
	cout<<"Numero de mujeres: "; cin>>NumMujeres; 
	cout<<"Numero de hombres: "; cin>>NumHombres; 
	cout<<"Numero de ni�os: "; cin>>NumNinios;
	
	if((NumMujeres + NumHombres + NumNinios) == NumPersonas){	
		
		PorNinios = (100*NumNinios)/NumPersonas;
		PorHombres = (100*NumHombres)/NumPersonas;
		PorMujeres = (100*NumMujeres)/NumPersonas;
		
		cout<<endl<<endl;
		cout<<"El porcentaje de mujeres es de: "<<PorMujeres<<"% entre "<<NumPersonas<< " personas.\n";
		cout<<"El porcentaje de hombres es de: "<<PorHombres<<"% entre "<<NumPersonas<< " personas.\n";
		cout<<"El porcentaje de ni�os es de: "<<PorNinios<<"% entre "<<NumPersonas<< " personas.\n";
	
	}else{
		cout<<"\n!ERROR� El numero de hombres, mujeres y ni�os no concuerda con el total de personas.\n\n";
	}
	
  return 0;
}

