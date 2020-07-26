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
int Remove_Node_R(int Data, Element **heap);
unsigned char Count_Number_Nodo(Element *Pointer_To_List);
unsigned char Count_Number_Item_List_R(Element *Pointer_To_List, unsigned char Account);
Element *Find_A_Node(Element *head, int Data);
Element *Find_A_Node_Recursively(Element *head, int Data, int Account);
int Insert_A_Nodo(Element *Nodo_Previous, Element *Nodo_A_Insert);
int Delete_A_Linked_List(Element **Pointer_A_Pointer_Head);
int Delete_A_Linked_List_R(Element **head);
#endif
