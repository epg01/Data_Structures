#include "List.h"

void List_Init(List *list, void (*Destroy)(void *Data))
{
	list->Size    = 0;
	list->Destroy = Destroy;
	list->Head    = NULL;
	list->Tail    = NULL;

	printf("Se inicializo la lista enlezada");
	printf("\nDatos iniciales:\n");
	printf("\t Tamaño de la lista:\t %d\n\t Inicio de la lista:\t %p\n\t Fin de la lista:\t %p\n\t Funcion destroy:\t %p\n", list->Size, (void *)list->Head, (void *)list->Tail, (void *)list->Destroy);

	return ;
}
