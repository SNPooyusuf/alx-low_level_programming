#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int Num;

	if (!head || !*head)
		return (0);

	Num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (Num);
}
