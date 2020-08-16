#include "Stack.h"

void Destroy(void *Data)
{
	free((int *)Data);
}

int main(void)
{
	Stack stack;

	Stack_Init(&stack, Destroy);
	int i = 1;

	while (i < 5)
	{
		int *P = (int *)malloc(sizeof(int));
		*P = i++;

		Stack_Push(&stack, P);
	}
	ListElement *element = stack.Head;


	while (element)
	{
		printf("%d\n", *(int *)element->Data);
		element = element->Next;
	}
	void *Data;

	Stack_Pop(&stack, (void **)&Data);
	printf("%d\n", *(int *)Data);

	List_Destroy(&stack);
	return (0);
}
