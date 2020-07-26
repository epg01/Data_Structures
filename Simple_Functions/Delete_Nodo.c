#include "Data_Structures.h"

/**
 *
 *
 *
 */

void Delete_Nodo(int Data, Element **heap)
{
	if (Data == (*heap)->Data)
	{
		Element *Nodo_Linker;

		Nodo_Linker = (*heap);
		*heap       = (*heap)->Next;
		free(Nodo_Linker);
	}
	else
	{
		Element *Nodo_Next = (*heap);
		Element *Nodo_Previous;

		while (Data != (Nodo_Next->Data) && (Nodo_Next->Next))
		{
			Nodo_Previous = Nodo_Next;
			Nodo_Next     = Nodo_Previous->Next;
		}
		if (!(Nodo_Next->Next))
		{
			printf("Elemento no encontrado en la linked list. \n");
			printf("El dato  no encontrado es: [%d]\n", Data);
		        return ;
		}
		Nodo_Previous->Next = Nodo_Previous->Next;
		free(Nodo_Next);
	}
}
