#include "Set.h"

int Set_Remove(Set *set, void **Data)
{
	ListElement *Member, *Prev;

	/*
	 * Find the member to remove.
	 */

	Prev = NULL;

	for (Member = List_Head(set); Member != NULL; Member = List_Next(Member))
		if (set->Match(*Data, List_Data(Member)))
			break;
		else
			Prev = Member;
	/*
	 * Return if the member was not found.
	 */

	if (Member == NULL)
		return (-1);
	else
		/*
		 * Remove the member
		 */
		return (List_Rem_Next(set, Prev, Data));
}
