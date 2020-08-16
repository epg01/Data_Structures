#include "List.h"

int List_Ins_Next(List *list, ListElement *element,const  void *Data)
{
	ListElement *New_Element;

	if ((New_Element = (ListElement *)malloc(sizeof(ListElement))) == NULL)
		return (-1);

	New_Element->Data = (void *)Data;

	if (element == NULL)
	{
		if (List_Size(list) == 0)
		{
			list->Tail = New_Element;
		}

		New_Element->Next = list->Head;
		list->Head        = New_Element;
	}
	else
	{
		if (element->Next == NULL)
			list->Tail = New_Element;

		New_Element->Next = element->Next;
		element->Next     = New_Element;
	}

	list->Size++;

	return (0);


}
