/*En la clase de aritmética de la escuela secundaria técnica No. 35, el maestro les solicita al
departamento de sistemas que se le desarrolle un programa que pida al usuario un número
entero decimal entre 1 y 99, incluyendo los extremos y obtenga la correspondiente
representación en el sistema romano y su decimal, con el objetivo de poder explicar
mediante el programa visualmente el sistema de conversión a sus alumnos. El programa
mostrará en pantalla el número decimal y su conversión el sistema romano.*/
#include<iostream>
#include<locale>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Spanish");
	
	float numero;
	cout<<"Programa para convertir un numero entero a numero romano.\n\n";
	
	cout<< "digite el numero que desea pasar a numeros romanos este numero debe estar en un rango entre 1-99: ";
	cin>> numero;
	
	if(numero <= 99) {
	
		if(numero >= 90) { cout<<"XC"; numero -= 90; }
		if(numero >= 50) { cout<<"L"; numero -= 50; }
		if(numero >= 40) { cout<<"XL"; numero -= 40; }
		while(numero >= 10) { cout<<"X"; numero -= 10; }
		if(numero >= 9) { cout<<"IX"; numero -= 9; }
		if(numero >= 5) { cout<<"V"; numero -= 5; }
		if(numero >= 4) { cout<<"IV"; numero -= 4; }
		while(numero >= 1) { cout<<"I"; numero -= 1; }
	}
	else{
		cout<<"!ERROR¡ El numero esta fuera del rango permitido.\n";
	} 
	return 0;
}
