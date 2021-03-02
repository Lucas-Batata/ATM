#include <stdio.h>
#include <string.h>
#include "factoryTeclado.cpp"
#include "saidaNotas.h"
#include "factoryTela.cpp"
#include <iostream>


int main()
{
	//Criando objeto da classe saida notas
	saidaNotas saida;

	int valorSaque = 0;


	//Define como tela 1: Tela Computador
	telaAbstracao* ptr_telaPrincipal = factoryTela::ptr_factoryTela(1);

	ptr_telaPrincipal->tla_imprimirTela("Digite o valor a ser sacado.");

	//Define o teclado como 1: Teclado de Computador
	tecladoAbstrato* ptr_tecladoPrincipal = factoryTeclado::ptr_tecladoFactory(1);

	//Solicita a digitação do valor a ser sacado
	ptr_tecladoPrincipal->tcl_setValor();

	//Consulta o valor que o usuario digitou e escreve na variavel valor Saque.
	valorSaque = ptr_tecladoPrincipal->tcl_getValor();

	//Passa o valor de saque para o objeto saida
	saida.sNt_sacar(valorSaque);
	
	//Imprime o valor que foi sacado
	saida.sNt_imprimir();

	return 0;
}