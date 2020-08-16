#include "Set.h"

void Set_Init(Set *set, int (*Match)(const void *Key, const void *Key2), void (*Destroy)(void *Data))
{
	set->Size    = 0;
	set->Match   = Match;
	set->Destroy = Destroy;
	set->Head    = NULL;
	set->Tail    = NULL;

	printf("Se inicializo la lista enlezada");
	printf("\nDatos iniciales:\n");
	printf("\t Tamaño de la lista:\t %d\n\t Inicio de la lista:\t %p\n\t Fin de la lista:\t %p\n\t Funcion destroy:\t %p\n", set->Size, (void *)set->Head, (void *)set->Tail, (void *)set->Destroy);
	printf("\t Funcion Match:\t\t %p\n", set->Match);

	return ;
}
