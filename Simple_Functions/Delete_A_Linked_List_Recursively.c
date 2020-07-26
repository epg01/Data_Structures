#include "Data_Structures.h"

/**
 *
 *
 *
 */

int Delete_A_Linked_List_R(Element **head)
{
	int Delete_R(Element **Pointer_To_Linked_List, int Account);

	int Found = Delete_R(&(*head), 0);

	if (!Found)
		*head = NULL;
	return (Found);
}

/**
 *
 *
 */

int Delete_R(Element **Pointer_To_Linked_List, int Account)
{
	if (!(*Pointer_To_Linked_List))
	{
		printf("There is no Linked List\n");
		return (-1);
	}
	else if (!((*Pointer_To_Linked_List)->Next))
	{
		printf("Se elemino el nodo numero [%d]\tWhat the data contains [%d]\n", ++Account, (*Pointer_To_Linked_List)->Data);
		printf("Linked List removed satisfactory\n");
		free(*Pointer_To_Linked_List);
		return (0);
	}
	else
	{
		printf("Se elemino el nodo numero [%d]\tWhat the data contains [%d]\n", Account, (*Pointer_To_Linked_List)->Data);
		Delete_R(&((*Pointer_To_Linked_List)->Next), ++Account);
		free(*Pointer_To_Linked_List);
		return (0);
	}
}
