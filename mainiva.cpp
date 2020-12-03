#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int vventas,vcompras;
	std::cout << "Digite el Valor de Ventas con IVA $";
	std::cin >>vventas;
	std::cout << "Digite el Valor de Compras con IVA $";
	std::cin >>vcompras;
	std::cout <<"Cliente:  Cliente 1 ==>";
	std::cout <<"==>Valor de Ventas con IVA $" <<vventas;
	std::cout <<"==>Valor de Compras con IVA $" <<vcompras;
	std::cout <<"==>Valor de IVA Ventas $" <<(vventas*16)/100;
	std::cout <<"==>Valor de IVA Ventas $" <<(vcompras*16)/100;
	std::cout <<"==>Valor a pagar IVA $" <<((vventas*16)/100)-((vcompras*16)/100);
	return 0;
}
