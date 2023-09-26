#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first node in linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
