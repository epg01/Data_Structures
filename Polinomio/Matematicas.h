#ifndef Matematicas
#define Matematicas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Element_
{
	int Coeficiente;
	int Exponente;
	char *Termino;
};

typedef struct Element_ Element;

struct Polinomio_
{
	Element Termino;
	struct Polinomio *Next;
};

typedef struct Polinomio_ Polinomio;

#define Signal(Termino)  (*(Termino) != '+' && (*(Termino) != '-'))

#define Length(Termino, Counter)		\
	while(*(Termino) && (Signal(Termino)))	\
		Counter++, Termino++;
#define Recolectar_Characters(Termino_A_Copiar, Termino)		\
        while(signal(Termino) && (*(Termino_A_Copiar++) = (*(Termino)++))); \
	if (!signal(Termino))						\
		*(Termino_A_Copiar) = '\0';				\
        if (!(Termino[-1]))						\
		(Termino) = NULL;

/*
 * Funciones utilizadas en este proyecto.
 */

char *Copiar_Termino(char **Termino);

#endif
