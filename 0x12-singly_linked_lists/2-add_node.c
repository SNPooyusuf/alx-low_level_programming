#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *New;
	unsigned int len = 0;

	while (str[len])
		len++;

	New = malloc(sizeof(list_t));
	if (New == NULL)
		return (NULL);

	New->str = strdup(str);
	New->len = len;
	New->next = (*head);
	(*head) = New;

	return (*head);
}
