/*El instructor de Matemáticas quiere determinar cuál es la calificación más alta del grupo,
formando grupos de tres calificaciones y las captura. Desarrollar un programa en C++, el cual
determine el mayor de las tres calificaciones, el programa debe mostrar en pantalla la
calificación mayor.*/
#include<iostream>
using namespace std;

int main()
{
	float nota1, nota2, nota3, NotaMayor;
	int NumNotas, notas;
	cout<<"             Programa para calcular la nota mas alta.\n\n";
	
	cout<<"Digite el numero de notas que desea evaluar: ";
	cin>> NumNotas;
	
	for(int i = 0; i < NumNotas; i += 3){
		
		cout<<"Digite tres notas de las "<< NumNotas<<" notas: ";
		cin>> nota1; cin>> nota2; cin>> nota3;
		
		if((nota1 >= nota2) && (nota1 >= nota3)){
			NotaMayor = nota1;
		}
		else if((nota2 >= nota1) && (nota2 >= nota3)){
			NotaMayor = nota2;
		}
		else if((nota3 >= nota1) && (nota3 >= nota2)){
			NotaMayor = nota3;
		}
	}
	cout<< "La nota mayor es: "<< NotaMayor;
	
  return 0;
}

