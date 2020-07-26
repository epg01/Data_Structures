#include "Data_Structures.h"

/**
 *
 *
 *
 */

unsigned char Count_Number_Item_List_R(Element *Pointer_To_List, unsigned char Account)
{
	if (Pointer_To_List)
	{
		if (!(Pointer_To_List->Next))
		{
			printf("Number of item of the linked list is: [%u]\n", ++Account);
			return (Account);
		}
		else
			return (Count_Number_Item_List_R(Pointer_To_List->Next, ++Account));

	}
	else
	{
		printf("There is no item in the Linked List");
		return (-1);
	}
}
