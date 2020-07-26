#include "Data_Structures.h"

void BorrarOrd(Element **Head, int Data)
{
	Element *Nodo_Next, *Nodo_Previous;
	unsigned char Found;

	Nodo_Next = (*Head);
	Nodo_Previous = NULL;
	Found = 0;

	while ((!Found) && (Nodo_Next->Next))
	{
		Found = (Data <= (Nodo_Next->Data));
		if (!Found)
		{
			Nodo_Previous = Nodo_Next;
			Nodo_Next     = Nodo_Next->Next;
		}
	}
	if (Found)
		Found = (Data == (Nodo_Next->Data));
	if (Found)
	{
		if (Nodo_Previous == NULL)
		{
			*Head = Nodo_Next->Next;
		}
		else
			Nodo_Previous->Next = Nodo_Next->Next;
		free(Nodo_Next);
	}

}
