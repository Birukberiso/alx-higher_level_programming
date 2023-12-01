#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
 * Return: 0 if no cycle, 1 if cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL) /* empty list */
		return (0);

	slow = list; /* start both pointers at the head */
	fast = list;

	while (slow && fast && fast->next) /* traverse the list */
	{
		slow = slow->next; /* move slow pointer one node at a time */
		fast = fast->next->next; /* move fast pointer two nodes at a time */

	if (slow == fast) /* if the pointers meet, there is a cycle */
		return (1);
	}

	return (0); /* if the pointers don't meet, there is no cycle */
}
