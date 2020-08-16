#include "Stack.h"

int Stack_Pop(Stack *stack, void **Data)
{
	return(List_Rem_Next(stack, NULL, Data));
}
