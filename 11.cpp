/*11. La empresa comercializadora Poncha vende escobas, recogedores y aromatizantes,
clasifica a sus clientes de a acuerdo a la frecuencia de compras con las condiciones siguientes:
a. Si el cliente es de la categoría 1 se le descuenta el 5%
b. Si el cliente es de la categoría 2 se le descuenta el 8% c. Si el cliente es de la categoría 3
se le descuenta el 12%
d. Si el cliente es de la categoría 4 se le descuenta el 15%
Cuando el cliente realiza una compra se generan los siguientes datos:
• Nombre del cliente
• Tipo de cliente
• Cantidad comprada de escobas, recogedora y aromatizante.
Desarrollar un programa en C++ que lea estos datos y calcule y muestre en pantalla:
• Nombre del cliente.
• Subtotal a pagar.
• Descuento.
• Total a pagar.*/
#include<iostream>
#include<locale>
#include<stdlib.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Spanish");
	char nombre[50];
	int categoria, escobas, recogedores, aromatizante;
	float subtotal, descuento, total;
	cout<<"Bienvenido a Poncha Su empresa de confianza.\nProgrma para calcular su compra\n\n";
	
	cout<<"Por favor ingrese su nombre: ";
	cin.getline(nombre, 50, '\n');
	
	//precio unidad de escoba: 4.000
	cout<<"Digite la cantidad comprada de escobas: ";
	cin>> escobas;
	//precio unidad de recogedor: 4.000
	cout<<"Digite la cantidad comprada de recogedores: ";
	cin>>recogedores;
	//precio unidad e aromatizante: 6.000
	cout<<"Digite la cantidad comprada de aromatizantes: ";
	cin>> aromatizante;
	
	system("cls");
	subtotal = subtotal+(escobas*4000);
	subtotal = subtotal+(recogedores*4000);
	subtotal = subtotal+(aromatizante*6000);
	
	cout<<"En nuestra empresa manejamos 4 categorias de clientes ";
	cout<<"ingrese la categoria a la cual usted pertenece (1, 2, 3, 4): ";
	cin>> categoria;
	cout<<"Recuerde que esto sera validado en nuestra base de datos";
	
	switch(categoria){
		case 1:{
			cout<<"Por pertenecer a la categoria 1 usted es beneficiario de un descuento del 5% en el total de su compra.\n";
			descuento = subtotal*.05;
			break;
		} 
		case 2:{
			cout<<"Por pertenecer a la categoria 2 usted es beneficiario de un descuento del 8% en el total de su compra.\n";
			descuento = subtotal*.08;
			break;
		}
		case 3:{
			cout<<"Por pertenecer a la categoria 3 usted es beneficiario de un descuento del 12% en el total de su compra.\n";
			descuento = subtotal*.12;
			break;
		}
		case 4:{
			cout<<"Por pertenecer a la categoria 4 usted es beneficiario de un descuento del 15% en el total de su compra.\n";
			descuento = subtotal*.15;
			break;
		}
	}
	total = subtotal-descuento;
	
	system("cls");
	cout<<"Señor(a): "<< nombre<<endl;
	cout<<"Usted ha realizado una compra de: "<<endl;
	cout<<escobas<<" escobas; "<<recogedores<<" recogedores; "<<aromatizante<<" aromatizantes.\n\n";
	cout<<"Su subtotal a pagar es de: $"<<subtotal<<endl;
	cout<<"Con su respectivo descuento se le ha reducido: $"<<descuento<<endl;
	cout<<"Para un total a pagar de: $"<<total<<endl;
	cout<<"Gracias por comprar en Poncha. Feliz dia.\n";  	
	
	return 0;
}
