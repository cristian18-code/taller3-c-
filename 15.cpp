/*(15). Una papelería debe calcular las diferentes cantidades de fotocopias a sacar. El precio unitario de cada
fotocopia es de $100 debe digitarse la cantidad de copias. Mostrar el total a pagar teniendo en cuenta que
se tiene una política de descuento para cantidades que se obtengan del mismo original así: el 12% para
fotocopias entre 100 y 200, del 15% para fotocopias entre 201 y 400, y del 18% para fotocopias por
cantidades mayores a 400.*/
#include<iostream>
#include<locale>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int CantCopias;
	double TotalPagar;
	
	cout<<"Programa para Calcular el descuento por compras en una fotocopiadora.\n";
	cout<<"El precio de cada copia es de: $100.\n\n";
	cout<<"Las politicas de descuentos son asi: \n";
	cout<<"Del 12% para fotocopias entre 100 y 200, del 15% para fotocopias entre 201 y 400, y del 18% para fotocopias por\ncantidades mayores a 400.\n\n";
	cout<<"Digite la cantidad de copias a comprar: "; cin>>CantCopias;
	system("cls");
	
	TotalPagar = CantCopias*100;
	
	if(CantCopias >= 100 && CantCopias <= 200)
	{
		TotalPagar = TotalPagar-(TotalPagar*0.12);
		cout<<"Usted ha comprado: "<<CantCopias<< " copias\n";
		cout<<"Por lo tanto se le ha realizado un descuento del 12%.\n";
	}
	else if(CantCopias > 200 && CantCopias <= 400)
	{
		TotalPagar = TotalPagar-(TotalPagar*0.15);
		cout<<"Usted ha comprado: "<<CantCopias<< " copias\n";
		cout<<"Por lo tanto se le ha realizado un descuento del 15%.\n";
	}
	else if(CantCopias > 400)
	{
		TotalPagar = TotalPagar-(TotalPagar*0.18);
		cout<<"Usted ha comprado: "<<CantCopias<< " copias\n";
		cout<<"Por lo tanto se le ha realizado un descuento del 18%.\n";
	}else if(CantCopias < 100){
		cout<<"Usted ha comprado: "<<CantCopias<< " copias\n";
		cout<<"No se le ha realizado descuento, debido a que su compra ha sido inferior a 100 copias.\n";
	}
	
	cout<<"Su valor a pagar es de: $"<<TotalPagar<<endl;
	
	return 0;
}


