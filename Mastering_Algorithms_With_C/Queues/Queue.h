#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

#include "../Linked_List/List.h"

/*
 * Implement Queues as linked lists.
 */

typedef List Queue;

/*
 * ------------------------- Public Interface -------------------------
 */

#define Queue_Init List_Init
#define Queue_Destroy List_Destroy

int
Queue_Enqueue(Queue *queue, const void *Data);

int
Queue_Denqueue(Queue *queue, void **Data);

#define Queue_Peek(queue) ((queue)->Head == NULL ? NULL : (queue)->Head->Data)
#define Queue_Size List_Size

#endif
