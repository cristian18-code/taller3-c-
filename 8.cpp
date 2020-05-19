/*El departamento de Recursos Humanos de la empresa café Combate quiere desarrollar un
calendario en línea para sus empleados, para calendarizar el número de días hábiles de trabajo
de tal manera que el empleado introduzca un número de mes (1 a 12), y visualice el número de
días de ese mes. Debe considerar que el mes 2 corresponde a febrero que tiene 28 días.
Desarrolle un programa en C++ que cumpla con las especificaciones mencionadas y muestre en
pantalla el mes, el número de días.*/
#include<iostream>
#include<locale>
#include<stdlib.h>
using namespace std;

int mes();

int main(){
	
	setlocale(LC_CTYPE, "Spanish");
	int op;
	char desicion;
	cout<<"            Bienvenido A Cafe Combate.\nSistema para revisar sus dias habiles de trabajo.\n\n";
	
	do{
		cout<<"Ingrese un numero entre 1 y 12. Este numero sera respecto al mes que desea revisar: ";
		cin>> op;
		
		switch(op){
			case 1:{
				system("cls");
				cout<<"         ENERO.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles [31] Jueves\n\n";
				break;
			}
			case 2:{
				system("cls");
				cout<<"         Febrero.\n\n";
				mes();
				cout<<"\n[28] Lunes\n\n";
				break;
			}
			case 3:{
				system("cls");
				cout<<"         MARZO.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles [31] Jueves\n\n";
				break;
			}
			case 4:{
				system("cls");
				cout<<"         ABRIL.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles\n\n";
				break;
			}
			case 5:{
				system("cls");
				cout<<"         MAYO.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles [31] Jueves\n\n";
				break;
			}
			case 6:{
				system("cls");
				cout<<"         JUNIO.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles\n\n";
				break;
			}	
			case 7:{
				system("cls");
				cout<<"         JULIO.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles [31] Jueves\n\n";
				break;
			}
			case 8:{
				system("cls");
				cout<<"         AGOSTO.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles [31] Jueves\n\n";
				break;
			}
			case 9:{
				system("cls");
				cout<<"         SEPTIEMBRE.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles\n\n";
				break;
			}
			case 10:{
				system("cls");
				cout<<"         OCTUBRE.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles [31] Jueves\n\n";
				break;
			}
			case 11:{
				system("cls");
				cout<<"         NOVIEMBRE.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles\n\n";
				break;
			}
			case 12:{
				system("cls");
				cout<<"          DICIEMBRE.\n\n";
				mes();
				cout<<"\n[28] Lunes [29] Martes [30] Miercoles [31] Jueves\n\n";
				break;
			}
			default :{
				cout<<"!ERROR¡ La opcion seleccionada no esta disponible\n";
			}
    	
		}
		cout<<"¿Desea hacer otra consulta?(S/N): ";
		cin>> desicion;
	}while(desicion == 's' || desicion == 'S');	
          return 0;
}

int mes(){     
	
	for(int i = 1; i <= 27; i++){
		if((i == 1) || (i == 11) || (i == 21)){
			cout<<"\n["<<i<<"] Lunes ";
		}
		if((i == 2) || (i == 12) || (i == 22)){
			cout<<"["<<i<<"] Martes ";
		}
		if((i == 3) || (i == 13) || (i == 23)){
			cout<<"["<<i<<"] Miercoles ";
		}
		if((i == 4) || (i == 14) || (i == 24)){
			cout<<"["<<i<<"] Jueves ";
		}
		if((i == 5) || (i == 15) || (i == 25)){
			cout<<"["<<i<<"] Viernes ";
		}
		if((i == 6) || (i == 16) || (i == 26)){
			cout<<"["<<i<<"] Sabado ";
		}
		if((i == 7) || (i == 17) || (i == 27)){
			cout<<"["<<i<<"] Domingo ";
		}
	}
}

