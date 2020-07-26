#include "Data_Structures.h"

/**
 *
 *
 *
 *
 */

Element *Find_A_Node_Recursively(Element *Head, int Data, int Account)
{
	if (Head)
		if (!(Head->Next))
		{
			printf("Node not found\n");
			printf("There is no node that contains the data = [%d]\n", Data);
			return (NULL);
		}
		else if ((Data == Head->Data))
		{
			printf("Found node\n");
			printf("Item number = [%d]\n", ++Account);
			printf("Nodo data   = [%d]\n", Head->Data);
			return (Head);
		}
		else
			return (Find_A_Node_Recursively(Head->Next, Data, ++Account));
	else
	{
		printf("There is no Linked List\n");
		return (NULL);
	}
}
