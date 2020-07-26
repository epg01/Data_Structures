#include "Data_Structures.h"

/**
 *
 *
 *
 */

void print_Linked_ListR(Element *Pointer_Browse_List, int Index)
{
	if (!(Pointer_Browse_List))
	{
		printf("No existe link list\n");
		return ;
	}
	if (!(Pointer_Browse_List->Next))
	{
		printf("Elemento[%d]\t =\t Data -> [%d]\n", Index, Pointer_Browse_List->Data);
		return ;
	}
	else
	{
		printf("Elemento[%d]\t =\t Data -> [%d]\n", Index, Pointer_Browse_List->Data);
		print_Linked_ListR(Pointer_Browse_List->Next, ++Index);
		return ;
	}
}
