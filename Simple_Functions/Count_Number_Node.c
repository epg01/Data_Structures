#include "Data_Structures.h"

/**
 *
 *
 *
 */

unsigned char Count_Number_Nodo(Element *Pointer_To_List)
{
	if (Pointer_To_List)
	{
		unsigned char Counter = 0;
		while (Pointer_To_List)
			Pointer_To_List = Pointer_To_List->Next, Counter++;
		printf("Number of item of the Linked List = [%u]\n", Counter);
		return (Counter);
	}
	else
	{
		printf("There is no an Linked List\n");
		return (-1);
	}
}
