#pragma once

#ifndef NOTAS_H_
#define NOSTAS_H_

#include "notas.h"


using namespace std;

class saidaNotas : public notas
{
private:
	int mQtdNotas[7] = { 0, 0, 0, 0, 0, 0, 0 };
public:
	void sNt_sacar(int mSubtrair);
	void sNt_imprimir();
};

#endif