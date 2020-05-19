/*El usuario deberá elegir una opción y el programa deberá mostrar el resultado por pantalla. Además, para que en
aquellos casos en los que el usuario elige una opción distinta de las 4 posibles el programa muestre un 
mensaje de error (por ejemplo: “Error. Opción no válida” y a continuación finalice.*/
#include<iostream>
#include<locale>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int numero1, numero2, op, resultado;
	char desicion;
	cout<<"Programa para hacer las cuatro operaciones basicas, entre dos numeros.\n\n";
	
	do{
		system("cls");
		cout<<"Digite dos numeros, separados por un espacio: ";
		cin>> numero1; cin>> numero2;
	
		cout<<"			MENU\n";
		cout<<"		(1) Sumar\n";
		cout<<"		(2) Restar\n";
		cout<<"		(3) Multiplicar\n";
		cout<<"		(4) Dividir\n";
		cout<<"Elija la opcion deseada: ";
		cin>> op;
		
		system("cls");
		switch(op){
			case 1:{
				
				cout<<"Operacion: SUMA.\n\n";
				resultado = numero1+numero2;
				cout<<"El resultado de la suma es: "<<resultado<<endl;
				break;
			}
			case 2:{
				cout<<"Operacion: RESTA.\n\n";
				resultado = numero1-numero2;
				cout<<"El resultado de la resta es: "<<resultado<<endl;
				break;
			}
			case 3:{
				cout<<"Operacion: MULTIPLICACION.\n\n";
				resultado = numero1*numero2;
				cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
				break;
			}
			case 4:{
				cout<<"Operacion: DIVISION.\n\n";
				resultado = numero1/numero2;
				cout<<"El resultado de la division es: "<<resultado<<endl;
				break;
			}
			default :{
				cout<<"!ERROR¡ Opcion no valida.\n\n";
			}
		}
		Sleep(2500);
		cout<<"\n¿Desea realizar otra operacion?(S/N): ";
		cin>> desicion;
	}while((desicion == 'S') || (desicion == 's'));
	

  	return 0;
}




















