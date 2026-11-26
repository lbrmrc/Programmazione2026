// implementazione ADT figura

#include <math.h> // per usare sqrt

#include "figura.h"

Figura quadrato(float l) {
  Figura f;
  f.tipo = QUADRATO;
  f.dati.datiQuadrato.lato = l;
  return f;
}

Figura rettangolo(float b, float h) {
  Figura f;
  f.tipo = RETTANGOLO;
  f.dati.datiRettangolo.base = b;
  f.dati.datiRettangolo.altezza = h;
  return f;
}

float area(Figura f) {
  switch (f.tipo) {
  case QUADRATO:
    return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;

  case RETTANGOLO:
    return f.dati.datiRettangolo.base * f.dati.datiRettangolo.altezza;

  /*
  case TRIANGOLO:
    ...
    return sqrt(...); 
  */  
  }
}

float perimetro(Figura f) {
  switch (f.tipo) {
  case QUADRATO:
    return f.dati.datiQuadrato.lato * 4;
  case RETTANGOLO:
    return (f.dati.datiRettangolo.base + f.dati.datiRettangolo.altezza) * 2;
  }
}