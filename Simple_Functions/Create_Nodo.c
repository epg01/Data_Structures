#include "Data_Structures.h"

/**
 *
 *
 *
 */

Element *Create_Nodo(int Data)
{
	Element *Nodo;

	/*
	 * We call malloc to create an element type variable (nodo).
	 */

	Nodo       = (Element*)malloc(sizeof(Element));
	Nodo->Data = Data;
	Nodo->Next = NULL;
	return (Nodo);
}
