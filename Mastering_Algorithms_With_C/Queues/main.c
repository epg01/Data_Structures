#include "Queue.h"

int main(void)
{
	Queue queue;

	Queue_Init(&queue, NULL);

	int i = 1;

	while (i < 5)
	{
		int *Temp = (int *)malloc(sizeof(char));
		*Temp = i++;
		Queue_Enqueue(&queue, Temp);
	}
	ListElement *element = queue.Head;

	while(element)
	{
		printf("%d\n", *(int *)element->Data);
		element = element->Next;
	}
	int *Data;

	Queue_Denqueue(&queue, (void **)&Data);

	printf("Objeto que sera eliminado = %d\n", *Data);
	return (0);
}
