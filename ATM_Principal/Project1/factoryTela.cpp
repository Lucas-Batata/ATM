#include "telaAbstracao.h"
#include <iostream>

//Classe filha de (Tela Abstra�ao). Cria o polimorfismo para exibi��o em tela de computador
class telaComputador : public telaAbstracao
{
public:
	void tla_imprimirTela(std::string mImprimir)
	{
		std::cout << mImprimir;
	}
	~telaComputador()
	{

	}
};

class factoryTela
{
public:
	static telaAbstracao * ptr_factoryTela (int mEscolhaTela)
	{
		telaAbstracao* ptr_telaAux = NULL;
		switch (mEscolhaTela)
		{
			case 1:
				ptr_telaAux = new telaComputador;
				break;
			default:
				std::cout << "Tela inexistente" << std::endl;
				return NULL;
				break;
		}

		return ptr_telaAux;
	}
};
