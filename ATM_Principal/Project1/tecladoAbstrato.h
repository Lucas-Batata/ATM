#pragma once
 
class tecladoAbstrato
{
protected:
	//Define uma classe abstrata de teclado
	int mValorDigitado = 0;

public:
	//Pure Virtual Obriga Todas as Classes Objetos a Implementarem esses Metodos
	virtual void tcl_setValor() = 0;
	virtual int tcl_getValor() = 0;
	virtual ~tecladoAbstrato() = 0 
	{
	}
};
