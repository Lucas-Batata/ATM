#include "saidaNotas.h"
#include "interfaceGrafica.h"
#include <string.h>

using namespace std;

void saidaNotas::sNt_sacar(int mSubtrair)
{
	int mResto = mSubtrair % 10;

	//Utilizada para a comparação se o numero é maior ou menor que 10
	int mAux = 0;

	if (mSubtrair != 3 && mSubtrair > 1) 
	{
		if (mSubtrair < 10)
		{
			mAux = 1;
			mResto = mSubtrair;
		}
					
		//Libera 3 notas de R$2 e Uma nota de R$5 para conseguir debitar o unitario 1;
		if (mResto == 1)
		{
			mSubtrair = mSubtrair - (3 * notas::mValor[0]);
			mQtdNotas[0] = mQtdNotas[0] + 3;

			mSubtrair = mSubtrair - (1 * notas::mValor[1]);
			mQtdNotas[1] = mQtdNotas[1] + 1;
		}

		//Libera 4 notas de R$2 e Uma nota de R$5 para conseguir debitar o unitario 3;
		else if (mResto == 3)
		{
			mSubtrair = mSubtrair - (4 * notas::mValor[0]);
			mQtdNotas[0] = mQtdNotas[0] + 4;

			mSubtrair = mSubtrair - (1 * notas::mValor[1]);
			mQtdNotas[1] = mQtdNotas[1] + 1;
		}

		//Libera 3 notas de R$2
		else if (mResto == 6)
		{
			mSubtrair = mSubtrair - (3 * notas::mValor[0]);
			mQtdNotas[0] = mQtdNotas[0] + 3;
		}

		// Libera 4 notas de R$2
		else if (mResto == 8)
		{
			mSubtrair = mSubtrair - (4 * notas::mValor[0]);
			mQtdNotas[0] = mQtdNotas[0] + 4;
		}

		//Libera 1 nota de 5 e 2 notas de R$2
		else if (mResto == 9)
		{
			mSubtrair = mSubtrair - (1 * notas::mValor[1]);
			mQtdNotas[1] = mQtdNotas[1] + 1;
			mSubtrair = mSubtrair - (2 * notas::mValor[0]);
			mQtdNotas[0] = mQtdNotas[0] + 2;
		}

		/*mAux == 1 significa que o valor a ser debitado é menor que 10. Então nao pode fazer o loop.
		  Então a função se encerra no if.
		*/
		if (mAux == 1)
		{
			mAux = 0;
			return;
		}

		for (int i = 6; i >= 0; i--)
		{
			if (mSubtrair >= notas::mValor[i]) 
			{
				mSubtrair = mSubtrair - notas::mValor[i];
				mQtdNotas[i] = mQtdNotas[i] + 1;
			}
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