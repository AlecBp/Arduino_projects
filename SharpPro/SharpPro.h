/*
  SharpPro.h - Biblioteca para ler sensor Sharp 10-80cm
  Criada por Alec e Kaue
  Released into the public domain.
*/


#ifndef SharpPro_h
#define SharpPro_h

#include "Arduino.h"

class SharpPro
{
  public:
    SharpPro(int pino, int leituras, float limiar);
    float distancia();
  private:
    int _pino;
    int _leituras;
    float _limiar;
};

#endif
