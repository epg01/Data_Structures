#include "Stack.h"

int Stack_Push(Stack *stack, const void *Data)
{
	/*
	 * Push the data onto the stack.
	 */

	return ((List_Ins_Next(stack, NULL, Data)));
}
