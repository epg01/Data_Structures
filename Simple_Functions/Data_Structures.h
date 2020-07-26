#ifndef Data_Structures
#define Data_Structures

#include <stdlib.h>
#include <stdio.h>

typedef struct Element_
{
	int Data;
	struct Element_ *Next;
}Element;

void print_Linked_ListR(Element *Pointer_Browse_List, int Index);
void Insert_Order_Nodo(Element **Pointer_To_Pointer_Head, int Data);
Element *Create_Nodo(int Data);
void Delete_Nodo(int Data, Element **heap);
#endif
