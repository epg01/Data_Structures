#include "Data_Structures.h"

/**
 *
 *
 *
 */

Element *Find_A_Node(Element *head, int Data)
{
	int Account = 0;
	while (head && (head->Next))
	{
		if (Data == (head)->Data)
		{
			printf("Node Found\nThe Data is: [%d]\n", (head)->Data);
			printf("The number of the item is [%d]\n", ++Account);
			return (head);
		}
		Account++;
		head = head->Next;
	}
	printf("Node was not found\n");
	printf("There is no node that contains the data = [%d]\n", Data);
	return (NULL);
}
