#include "Set.h"

int Set_Union(Set *setu, const Set *set1, const Set *set2)
{
	ListElement *Member;
	void *Data;

	/*
	 * Initialize the set for the union.
	 */

	Set_Init(setu, set1->Match, NULL);

	/*
	 * Insert the member of the first set.
	 */

	for (Member = List_Head(set1); Member != NULL; Member = List_Next(Member))
	{
		Data = List_Data(Member);

		if (List_Ins_Next(setu, List_Tail(setu), Data) != 0)
		{
			Set_Destroy(setu);
			return (-1);
		}
	}

	/*
	 * Insert the members of the second set.
	 */

	for (Member = List_Head(set2); Member != NULL; Member = List_Next(Member))
		if (Set_Is_Member(set1, List_Data(Member)))
			/*
			 * Do not allow the insertion of duplicates.
			 */
			continue;
		else
		{
			Data = List_Data(Member);

			if (List_Ins_Next(setu, List_Tail(setu), Data) != 0)
			{
				Set_Destroy(setu);
				return (-1);
			}
		}

	return (0);
}
