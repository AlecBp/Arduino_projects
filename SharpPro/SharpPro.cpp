/*
  SharpPro.cpp - Biblioteca para ler sensor Sharp 10-80cm
  Criada por Alec e Kaue
  Released into the public domain.
*/

#include "Arduino.h"
#include "SharpPro.h"
SharpPro::SharpPro(int pino, int leituras, float limiar)
{
  _pino = pino;
  _leituras = leituras;
  _limiar = limiar/100;
}

float SharpPro::distancia()
{
	float acumulador=0;
	for(int c=0; c< _leituras; c++)
	{
		acumulador+=(float(analogRead(_pino)*5)/1023);
	}
	return(26.707*(pow((acumulador/_leituras),-1.267))*_limiar);
}
