/*Escribir un programa que dado un número del 1 al 7 escriba el correspondiente nombre del
día de la semana.*/
#include<iostream>
#include<locale>
#include<windows.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Spanish");
	int op;
	cout<<"Programa para mostrar un dia de la semana.\n\n";
	
	cout<<"Digite un numero entre 1 y 7 para mostrar un dia de la semana: ";
	cin>> op;
	cout<<endl;
	
	switch(op){
		case 1:{
			
			cout<<"Lunes.\n";
			Sleep(2000);
			break;
		}
		case 2:{
			cout<<"Martes.\n";
			Sleep(2000);
			break;
		}
		case 3:{
			cout<<"Miercoles.\n";
			Sleep(2000);
			break;
		}
		case 4:{
			cout<<"Jueves.\n";
			Sleep(2000);
			break;
		}
		case 5:{
			cout<<"Viernes.\n";
			Sleep(2000);
			break;
		}
		case 6:{
			cout<<"Sabado.\n";
			Sleep(2000);
			break;
		}
		case 7:{
			cout<<"Domingo.\n";
			Sleep(2000);
			break;
		}
		default :{
			cout<<"!ERROR¡ Solo existen 7 dias en la semana\n";
			break;
		}
	}
	return 0;
}
