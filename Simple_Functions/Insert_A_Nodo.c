#include "Data_Structures.h"

/**
 *
 *
 *
 */

int Insert_A_Nodo(Element *Nodo_Previous, Element *Nodo_A_Insert)
{
	if (Nodo_Previous && Nodo_A_Insert)
	{
		Nodo_A_Insert->Next = Nodo_Previous->Next;
		Nodo_Previous->Next = Nodo_A_Insert;
		printf("Se inserto el nodo\n");
		return (0);
	}
	else
	{
		printf("No se inserto el nodo --> Error\n");
		return (-1);
	}
}
