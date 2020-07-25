#include "Data_Structures.h"

/**
 *
 *
 *
 */

void Insert_Order_Nodo(Element **Pointer_To_Pointer_Head, int Data)
{
	Element *Gatherer_Nodo;

	/*
	 * A nodo is create and the data to be ordered is entered.
	 */

	Gatherer_Nodo = Create_Nodo(Data);

	/*
	 * Fisrt of all, Heap is an element-type pointer that is passed as the
	 * fisrt argument to the function Insert_Order_Nodo; Heap must be
	 * previously initialized as NULL, so that the instruction (or statement if)
	 * captures that nodo and exit the function, because we cannot compare a node
	 * if we don't if we have at least two yet.
	 *
	 * When capturing the first node, in the second call we go to the comparison;
	 * that is why in the if statements we put whether the pointer heap es NULL or not ,
	 * since it is on longer NULL, I have captured a nodo, we already have another node to
	 * compare, that is what the second if statement does.
	 */

	if (!(*Pointer_To_Pointer_Head))
		(*Pointer_To_Pointer_Head) = Gatherer_Nodo;
	else
		if (Data <= (*Pointer_To_Pointer_Head)->Data)
		{
			/*
			 * Here we make the new node point to the one pointed to by head (since head is a pointer)
			 * and then we make the heap point to the new nodo. Why are we doing this? For Example.
			 *
			 * If the node indicated by head is worth 5, and the new node is worth 3, we fisrt have to link
			 * 3 to 5 (and to do this, we don't have to move heap), the link heap to new node.
			 */

			Gatherer_Nodo->Next        = (*Pointer_To_Pointer_Head);
			(*Pointer_To_Pointer_Head) = Gatherer_Nodo;
		}
		else
		{
			Element *Nodo_Next    = (*Pointer_To_Pointer_Head);
			Element *Nodo_Previous;

			while (Data > (Nodo_Next->Data) && (Nodo_Next->Next))
			{
				Nodo_Previous = Nodo_Next;
				Nodo_Next     = Nodo_Next->Next;
			}
			if (Data > (Nodo_Next->Data))
				Nodo_Previous = Nodo_Next;
			Gatherer_Nodo->Next = Nodo_Previous->Next;
			Nodo_Previous->Next = Gatherer_Nodo;
		}
	return ;
}
