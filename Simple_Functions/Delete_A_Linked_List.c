#include "Data_Structures.h"

/**
 *
 *
 *
 */

int Delete_A_Linked_List(Element **Pointer_A_Pointer_Head)
{
	if (Pointer_A_Pointer_Head && (*Pointer_A_Pointer_Head))
	{
		Element *Nodo_Previous;
		int Number_Of_Nodo = 0;

		while (*Pointer_A_Pointer_Head)
		{
			Nodo_Previous = (*Pointer_A_Pointer_Head);
			(*Pointer_A_Pointer_Head) = (*Pointer_A_Pointer_Head)->Next;
			printf("Se elemino el nodo numero [%d]\tWhat the data contains [%d]\n", Number_Of_Nodo++, Nodo_Previous->Data);
			free(Nodo_Previous);
		}
		printf("Linked List removed satisfactory\n");
		return (0);
	}
	else
	{
		printf("There is no Linked list for Delete\n");
		return (-1);
	}
}
