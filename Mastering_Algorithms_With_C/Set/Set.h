#ifndef SET_H
#define SET_H

#include <stdlib.h>

#include "../Linked_List/List.h"

/*
 * Implement sets as linked list.
 */

typedef List Set;

/*
 * --------------------- Public Interface ---------------------
 */

void
Set_Init(Set *set, int (*Match)(const void *Key1, const void *Key2), void (*Destroy)(void *Data));

#define Set_Destroy List_Destroy

int
Set_Insert(Set *set, const void *Data);

int
Set_Remove(Set *set, void **Data);

int
Set_Union(Set *setu, const Set *set1, const Set *set2);

int
Set_Intersection(Set *seti, const Set *set1, const Set *set2);

int
Set_Difference(Set *setd, const Set *set1, const Set *set2);

int
Set_Is_Member(const Set *set, const void *Data);

int
Set_Is_Subset(const Set *set1, const Set *set2);

int
Set_Is_Equal(const Set *set1, const Set *set2);

#define Set_Size(set) ((set)->Size)

#endif
