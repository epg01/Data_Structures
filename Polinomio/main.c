#include "Matematicas.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		printf("Numnero a imprimir como polinomio: \n%s\n", *argv);

		Element x;
		printf("Polinomio 1:\n\t");
		x.Termino = Copiar_Termino(argv);
	}
	else
	{
		printf("Error\n");
		return (-1);
	}
}
