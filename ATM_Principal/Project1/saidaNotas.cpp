#include "saidaNotas.h"
#include "interfaceGrafica.h"
#include <string.h>


void saidaNotas::sNt_sacar(int mSubtrair)
{
	int mResto = 0;
	

	if (mSubtrair > 2) 
	{
		//mResto recebe somente a unidade do numero. Se for zero (mSubtrair) é um numero multiplo de 10.
		mResto = mSubtrair % 10; 
		if (mResto == 0) 
		{
			for (int i = 6; i >= 0; i--)
			{
				while (mSubtrair >= notas::mValor[i])
				{
					mSubtrair = mSubtrair - notas::mValor[i];
					mQtdNotas[i] = mQtdNotas[i] + 1;
				}
			}
		}
		else
		{

		}
	}
	else 
	{
		for (int i = 0; i < 7; i++)
		{
			mQtdNotas[i] = 0;
		}
	}
}

void saidaNotas::sNt_imprimir() {
	int j = 0;

	for (int i : saidaNotas::mQtdNotas) 
	{
		interface::intf_imprimirNaTela("Nota de ");
		
		interface::intf_imprimirNaTela(to_string(saidaNotas::mValor[j]));

		interface::intf_imprimirNaTela(" : ");

		interface::intf_imprimirNaTela(to_string(i));

		interface::intf_imprimirNaTela("\n");

		j++;
	}

}