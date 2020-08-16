#include "Queue.h"

int Queue_Enqueue(Queue *queue, const void *Data)
{
	return((List_Ins_Next(queue, List_Tail(queue), Data)));
}
