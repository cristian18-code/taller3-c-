/*Escriba un programa que cuente por pantalla del 1 al 10 en español. Utiliza una estructura
switch que incluya la cláusula default.*/
#include<iostream>
using namespace std;

int main()
{
	int numero, op;
	cout<<"                   Generador de opciones.\n\n";
	
	for(int i = 1; i <=11; i++){
		
		switch(i){
			case 1: {
					cout<<"UNO\n";
				break;
			}
			case 2: {
				    cout<<"DOS\n";
				break;
			}
			case 3: {
					cout<<"TRES\n";
				break;
			}
			case 4: {
					cout<<"CUATRO\n";
				break;
			}
			case 5: {
					cout<<"CINCO\n";
				break;
			}
			case 6: {
					cout<<"SEIS\n";
				break;
			}
			case 7: {
					cout<<"SIETE\n";
				break;
			}
			case 8: {
					cout<<"OCHO\n";
				break;
			}
			case 9: {
					cout<<"NUEVE\n";
				break;
			}
			case 10: {
					cout<<"DIEZ\n";
				break;
			}
			default :{
					cout<<"El conteo ha finaliizado.\n";
			}
		}
		
	}

  return 0;
}

