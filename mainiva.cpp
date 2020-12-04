#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int vventas,vcompras;
	std::cout << "Digite el Valor de Ventas con IVA $";
	std::cin >>vventas;
	std::cout << "Digite el Valor de Compras con IVA $";
	std::cin >>vcompras;
	std::cout <<"Cliente:  Cliente 1\n";
	std::cout <<"Valor de Ventas con IVA $" <<vventas <<"\n";
	std::cout <<"Valor de Compras con IVA $" <<vcompras <<"\n" ;
	std::cout <<"Valor de IVA Ventas $" <<(vventas*15.97)/100 <<"\n";
	std::cout <<"Valor de IVA Ventas $" <<(vcompras*15.97)/100 <<"\n";
	std::cout <<"Valor a pagar IVA $" <<((vventas*15.97)/100)-((vcompras*15.97)/100);
	return 0;
}
