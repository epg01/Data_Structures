#include "Data_Structures.h"

/**
 *
 *
 *
 */

int Remove_Node_R(int Data, Element **heap)
{
	if (!heap)
	{
		printf("No existe linked list\n");
		return (-2);
	}
	else if (!(*heap))
	{
		printf("No existe el dato en la lista enlazada\n");
		printf("El dato es: [%d]\n", Data);
		return (-1);
	}
	else if (Data == (*heap)->Data)
	{
		Element *Nodo_Linked;

		Nodo_Linked = (*heap);
		(*heap) = ((*heap)->Next);
		free(Nodo_Linked);
		printf("Se elimino el dato: [%d], de la lista enlazada\n", Data);
		return (0);
	}
	else
		return (Remove_Node_R(Data, (heap) = &((*heap)->Next)));
}
