#include "teclado.h"
#include <iostream>
#include "interfaceGrafica.h"

using namespace std;

void teclado::tcl_setValor() 
{
	
	interface::intf_imprimirNaTela("Digite o valor que deseja sacar:");
	cin >> mValor;
}

int teclado::tcl_getValor() 
{
	return mValor;
}
