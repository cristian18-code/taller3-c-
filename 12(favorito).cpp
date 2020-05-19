/*Desarrollar un programa que muestre los pagos que recibirá un trabajador por cada hora laboral en base a
la hora del día en que trabaja. El usuario deberá escribir el número de horas trabajadas en cada uno de 
los horarios y el programa determinará el total de dinero a recibir por el trabajador y también dirá si 
ganó más dinero por horas extras que por horas de oficina trabajadas o viceversa, o si el trabajador ganó
exactamente lo mismo por horas extras que por horas de oficina. De la galería de productos, el usuario
introducirá el código y el número de unidades del producto que desea comprar. El programa determinará 
el total a pagar, como una factura.*/
#include<iostream>
#include<locale>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Spanish");
	int HorasTrabajadasTotal = 0, HorasBaseTotal = 0, HorasExtraTotal = 0, HorasTrabajadas, HorasBase, HorasExtra, dias, i = 1;
	double TotalPagar = 0, TotalExtra = 0, TotalBase = 0;
	
	cout<<"Programa para calcular los pagos por dias trabajados.\n\nEl horario diario de trabajo es de: 8 horas.\n";
	cout<<"El valor base por hora de oficina trabajada es de: $4.375.\n"; 
   	cout<<"El valor de cada hora extra trabajada es de: $5.500.\n\n";
   
    cout<<"Cuantos dias o turnos desea registrar para calcular su pago: ";
    cin>> dias;
    
   	do{
		   	cout<<"Digite el total de horas que trabajo en el dia "<<i<<": ";
		   	cin>> HorasTrabajadas;
		   	
		   	//Calcular horas extras
		   	if((HorasTrabajadas > 8) && (HorasTrabajadas <= 24)){
		   		
			   	HorasExtra = HorasTrabajadas-8;
				HorasBase = HorasTrabajadas-HorasExtra;
				HorasTrabajadas = HorasExtra+HorasBase;
				
				HorasTrabajadasTotal = HorasTrabajadasTotal+HorasTrabajadas;
				HorasExtraTotal = HorasExtraTotal+HorasExtra;
				HorasBaseTotal = HorasBaseTotal+HorasBase;
				
				TotalExtra = TotalExtra+(HorasExtra*5500);
				TotalBase = TotalBase+(HorasBase*4375);
							
			}
			else if((HorasTrabajadas >= 1) && (HorasTrabajadas <= 24)){
				
				HorasBase = HorasTrabajadas;
				HorasBaseTotal = HorasBaseTotal+HorasBase;
				HorasTrabajadasTotal = HorasTrabajadasTotal+HorasTrabajadas;
				
				TotalBase = TotalBase+(HorasBase*4375);	
			}
			else{
				i--;	
				cout<<"\n!ERROR¡ La cantidad de horas trabajadas no puede ser menor de 1 ni mayor de 24.\n\n";
				Sleep(2000);
			}
			i++;
	  }while(i <= dias);
	
	TotalPagar = TotalPagar+(TotalExtra+TotalBase);
	system("cls");
	
	if(TotalExtra > TotalBase){		
	
			cout<<"El dinero ganado en horas extra es mayor al dinero ganado en horas de oficina.\n";	
			
	}else if(TotalExtra < TotalBase){
				
			cout<<"El dinero ganado en horas de oficina es mayor al dinero ganado en horas extra.\n";	
	}else{
			cout<<"El dinero ganado En horas extra es igual a al dinero ganado en horas de oficina.\n";
	} 
	
	cout<<"Total ganado en horas extra: $"<<TotalExtra<<endl;
	cout<<"Total ganado en horas de oficina: $"<<TotalBase<<endl;
	cout<<"Ha ganado en total: $"<< TotalPagar<<endl<<endl;
	
	cout<<"Usted ha acumulado un total de\n";
	cout<<"Horas extra: "<< HorasExtraTotal<< "; Horas de oficina: "<< HorasBaseTotal<< "; para un total de: "<< HorasTrabajadasTotal<< " horas trabajadas.\n"; 
	
	cout<<"\n!Gracias por trabajar con nosotros¡\n\n";
	
	return 0;
}
