#include "Matematicas.h"

char *Copiar_Termino(char **Termino)
{
	char *Termino_A_Copiar;
	int Counter_Final;

	if (!Signal((*Termino)))
	{
		int Counter = 1;
		char Solve_Product = *(*Termino)++;

		Length((*Termino), Counter);
		*Termino        -= Counter;
		Termino_A_Copiar = (char *)malloc(sizeof(char) * (Counter + 1));
		*(Termino_A_Copiar)++ = Solve_Product;

		Counter_Final = Counter + 1;
	}
	else
	{
		int Counter = 0;

		Length((*Termino), Counter);
		(*Termino)      -= Counter;
		Termino_A_Copiar = (char *)malloc(sizeof(char) * (Counter + 1));
		Counter_Final    = Counter + 1;
	}

	Recolectar_Characters(Termino_A_Copiar, (*Termino));
	Termino_A_Copiar -= Counter_Final;
	printf("%s", Termino_A_Copiar);

	if (!*Termino)
		printf("\n");
	return (Termino_A_Copiar);
}
