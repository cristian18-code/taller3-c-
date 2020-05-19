/*. Algoritmo que me permita calcular el porcentaje de hombres, de mujeres y de niños
de un número cualquiera de personas (se debe pedir el número de personas, el número de hombres, el número de
mujeres y el número de niños), enviar el porcentaje de hombres, de mujeres y de niños por pantalla.
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
	cout<<"Numero de niños: "; cin>>NumNinios;
	
	if((NumMujeres + NumHombres + NumNinios) == NumPersonas){	
		
		PorNinios = (100*NumNinios)/NumPersonas;
		PorHombres = (100*NumHombres)/NumPersonas;
		PorMujeres = (100*NumMujeres)/NumPersonas;
		
		cout<<endl<<endl;
		cout<<"El porcentaje de mujeres es de: "<<PorMujeres<<"% entre "<<NumPersonas<< " personas.\n";
		cout<<"El porcentaje de hombres es de: "<<PorHombres<<"% entre "<<NumPersonas<< " personas.\n";
		cout<<"El porcentaje de niños es de: "<<PorNinios<<"% entre "<<NumPersonas<< " personas.\n";
	
	}else{
		cout<<"\n!ERROR¡ El numero de hombres, mujeres y niños no concuerda con el total de personas.\n\n";
	}
	
  return 0;
}

