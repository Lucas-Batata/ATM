#include <stdio.h>
#include <string.h>
#include "teclado.h"
#include "interfaceGrafica.h"
#include "saidaNotas.h"

using namespace std;

int main()
{
	teclado tec;
	saidaNotas saida;

	tec.tcl_setValor();

	int valorSaque = tec.tcl_getValor();

	saida.sNt_sacar(valorSaque);

	saida.sNt_imprimir();
}