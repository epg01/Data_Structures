#include "Set.h"

int Set_Insert(Set *set, const void *Data)
{
	/*
	 * Do not allow the insertion of duplicates.
	 */

	if (Set_Is_Member(set, Data))
		return (1);

	/*
	 * Insert the data.
	 */

	return (List_Ins_Next(set, List_Tail(set), Data));
}
