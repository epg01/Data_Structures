#include "Queue.h"

int Queue_Denqueue(Queue *queue, void **Data)
{
	return ((List_Rem_Next(queue, List_Head(queue), Data)));
}
