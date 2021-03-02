#include "tecladoAbstrato.h"
#include <iostream>


//Definindo a Classe Filha Para Teclado de Computador
class tecladoComputador : public tecladoAbstrato
{
private:
	int mValorDigitado = 0;
public:
	void tcl_setValor() 
	{
		std::cin >> mValorDigitado;
	}
	
	int tcl_getValor() 
	{
		return mValorDigitado;
	}

	~tecladoComputador()
	{

	}
};

//Implementando o DesingPattern Factory
class factoryTeclado
{
public:
	static tecladoAbstrato* ptr_tecladoFactory(int mTipoTeclado)
	{
		tecladoAbstrato* ptr_tecAux = NULL;
		switch (mTipoTeclado)
		{
		case 1:
			//Caso esteja utilizando o teclado do computador
			ptr_tecAux = new tecladoComputador;
			break;

		default:
			std::cout << "teclado ainda nao definido.\n";
			return NULL;
			break;
		}
		
		return ptr_tecAux;
	}
};