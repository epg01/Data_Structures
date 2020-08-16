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
 *  Macro utilizadas en esta estructura de datos tipo de estructura: (Linked List).
 */

#define List_Size(list)                 ((list)->Size)
#define List_Next(element)              ((element)->Data)
#define List_Head(list)                 ((list)->Head)
#define List_Is_Head(list, element)     ((element) == list->Head ? 1 : 0)
#define List_Tail(list)                 ((list)->Tail)
#define List_Is_Tail(element)           ((element)->Next == NULL ? 1 : 0)
#define List_Data(element)              ((element)->Data)


/*
 * Funciones utilizadas.
 */

void
List_Init(List *list, void (*Destroy)(void *Data));

void
List_Destroy(List *list);

int
List_Rem_Next(List *list, ListElement *element, void **Data);

int
List_Ins_Next(List *list, ListElement *element,const  void *Data);

#endif
