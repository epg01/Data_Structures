#include "List.h"

int List_Rem_Next(List *list, ListElement *element, void **Data)
{
	ListElement *Old_Element;

	/*
	 * NO PERMITIR LA ELIMICACIÓN DE UNA LISTA VACIA.
	 */

	if (List_Size(list) == 0)
		return (0);

	/*
	 * Eliminar element de la lista.
	 */


	if (element == NULL)
	{
		*Data       = list->Head->Data;
		Old_Element = list->Head;
		list->Head  = list->Head->Next;

		if (List_Size(list) == 1)
		{
			list->Tail = NULL;
		}
	}
	else
	{
		if (element->Next == NULL)
			return -1;

		*Data         = element->Data;
		Old_Element   = element->Next;
		element->Next = element->Next->Next;

		if (element->Next == NULL)
			list->Tail = element;
	}

	free (Old_Element);

	printf("Se elimino El elemento de la lista que contiene la siguiente dirección en memoria\n");
	printf("Información del puntero:\n\tDirección:");
	printf("\t\t %p\n", Old_Element);

	(list->Size)--;

	printf("Numero de elementos actuales de la lista\n");
	printf("\t\tTamaño de la lista:%3d\n", list->Size);

	return (0);
}
