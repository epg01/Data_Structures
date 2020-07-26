#include "Data_Structures.h"

/**
 *
 *
 *
 */

int main(void)
{
	int Array[] = {4,3,2,5,1,7,6,10,9,8,13,11,12};
	int Size    = sizeof(Array) / sizeof(int);
	int Index   = 0;
	Element *head = NULL;

	while (Index < Size)
		Insert_Order_Nodo(&head, Array[Index++]);

	print_Linked_ListR(head, 0);

	printf("Pasamos a la eliminacion del nodo\n");

	for (Index = 0; head; Index++)
		 Remove_Node_R(Index, &head);

	print_Linked_ListR(head, 0);

	return (0);
}
