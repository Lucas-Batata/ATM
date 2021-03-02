#pragma once
#include <string>


class telaAbstracao
{
public:
	virtual void tla_imprimirTela(std::string) = 0;
	virtual ~telaAbstracao() = 0
	{

	}
};