/*7. Un cliente ordena cierta cantidad de brochas de cerda, rodillos y sellador; las brochas de
cerda tienen un 20% de descuento y los rodillos un 15% de descuento. Los datos que se tienen
por cada tipo de artículo son: la cantidad pedida y el precio unitario. Además, si se paga de
contado todo tiene un descuento del 7%. Elaborar un programa en C++ que calcule y muestre en
pantalla el costo total de la orden, tanto para el pago de contado como para el caso de pago de
crédito.*/
#include<iostream>
#include<locale>
#include<stdlib.h>
using namespace std;

int Brochas();
int Rodillos();
int Sellador();

int CantBrochas, CantRodillos, CantSellador;
double ValorPagar;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
	int op;
	char desicion;
	char contado;
	char desicion1;
	
	cout<<"                 Programa para calcular el precio total de una orden.\n\n";
	
	do{
		CantBrochas = 0; CantRodillos = 0; CantSellador = 0; ValorPagar = 0;
		
		do{
			cout<<"(1) Para comprar Brochas.\n";
			cout<<"(2) Para comprar Rodillos.\n";
			cout<<"(3) Para comprar Sellador.\n";
			cout<<"Seleccione una opcion teniendo en cuenta el menu: ";
			cin>> op;
		
			switch(op){
				case 1: {
						system("cls");
						Brochas();
					break;
				}
				case 2: {
						system("cls");
						Rodillos();
					break;
				}
				case 3: {
						system("cls");
						Sellador();
					break;
				}
				default :{
					cout<<"ERROR";
				}
			}
			cout<<"\n¿Desea calcular la compra de otro producto?(S/N): ";
			cin>>desicion1;
	    }while(desicion1 == 'S'|| desicion1 == 's');
	
		cout<<"\nUsted ha realizado la compra de: \n";
		cout<<"Brochas: "<<CantBrochas<<endl;
		cout<<"Rodillos: "<<CantRodillos<<endl;
		cout<<"Sellador: "<<CantSellador<<endl;
		cout<<"Para un total de: "<<ValorPagar<< " pesos.\n";
		
		cout<<"\nSi paga de contado tendra un 7% de descuento en el total de la compra. ¿Desea pagar de contado?(S/N): ";
		cin>> contado;
		if(contado == 'S' || contado == 's'){
			ValorPagar = ValorPagar*.7;
			cout<<"\nSe le ha realizado el descuento del 7%. Ahora el total de su compra es de: "<< ValorPagar<<endl;
		}
		else{
			cout<<"\nNO se ha realizado el descuento del 7%.\n";	
		}
		
		cout<<"¿Desea salir?(S/N): ";
		cin>> desicion;
		if(desicion == 'S' || desicion == 's'){
			cout<<"\nGRACIAS.\n";
		}
		
	}while(desicion != 'S' && desicion != 's');
	
  			return 0;
}

int Brochas(){
	cout<<"Digite la cantidad de brochas a comprar teniendo en cuenta que el precio unitario por brocha es de 2.000 pesos\n y que ademas hay un descuento del 20%: ";
	cin>> CantBrochas;
	
	ValorPagar = ValorPagar+(CantBrochas*(2000-(2000*.20)));
	
	return ValorPagar;
}

int Rodillos(){
	cout<<"Digite la cantidad de Rodillos a comprar teniendo en cuenta que el precio unitario por Rodillo es de 4.000 pesos\n y que hay un descuento del 15%: ";
	cin>> CantRodillos;
	
	ValorPagar = ValorPagar+(CantRodillos*(4000-(4000*.15)));
	
	return ValorPagar;
}

int Sellador(){
	cout<<"Digite la cantidad de sellador a comprar teniendo en cuenta que el precio unitario por sellador es de 5.000 pesos: ";
	cin>> CantSellador;
	
	ValorPagar = ValorPagar+(CantSellador*5000);
	
	return ValorPagar;
}
