#include <stdio.h>
#include <string.h>
#include "teclado.h"
#include "interfaceGrafica.h"
#include "saidaNotas.h"

using namespace std;

int main()
{
	//Criando objeto da classe teclado
	teclado tec;

	//Criando objeto da classe saida notas
	saidaNotas saida;

	//Chama a função tcl_setValor() do objeto tec
	tec.tcl_setValor();

	//Variavel inteira recebe o que tem na variavel modular do objeto tec
	int valorSaque = tec.tcl_getValor();

	//Passa o valor de saque para o objeto saida
	saida.sNt_sacar(valorSaque);

	//Imprime o valor que foi sacado
	saida.sNt_imprimir();

	return 0;
}