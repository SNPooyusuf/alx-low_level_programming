#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a linked list.
 * @h: Linked list of type listint_t to traverse.
 * 
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	int Num = 0;
	while (h != NULL)
	{
		Num++;
		h = h->next;
	}
	return (Num);
}
