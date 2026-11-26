// interfaccia ADT figura

typedef enum { QUADRATO, RETTANGOLO } TipoFigura;

typedef struct {
  float lato;
} DatiQuadrato;

typedef struct {
  float base;
  float altezza;
} DatiRettangolo;

typedef struct {
  TipoFigura tipo;
  union {
    DatiQuadrato datiQuadrato;
    DatiRettangolo datiRettangolo;
  } dati;
} Figura;

Figura quadrato(float l);

Figura rettangolo(float b, float h);

float area(Figura f);

float perimetro(Figura f);