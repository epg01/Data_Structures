#include "List.h"

void List_Destroy(List *list)
{
	void *Data;

	while (List_Size(list) > 0)
	{
		if ((List_Rem_Next(list, NULL, (void **)&Data) == 0) && (list->Destroy != NULL))
		{
			printf("Elemento a eliminar =\t%d\n", *(int *)Data);
			list->Destroy(Data);
		}
	}
	return ;
}
