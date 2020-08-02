#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>

/*
 *  Se definio una estructura para elementos de la lista vinculada.
 */

typedef struct ListElement_
{
	void                *Data;
	struct ListElement_ *Next;
}ListElement;

/*
 * Definir una estructura para la lista vinculada.
 */

typedef struct List_
{
	int                  Size;
	int                  (*Match)(const void *key, const void *key2);
	void                 (*Destroy)(void *Data);
	ListElement          *Head;
	ListElement          *Tail;
}List;

/*
 * Funciones utilizadas.
 */

void List_Init(List *list, void (*Destroy)(void *Data));

#endif
