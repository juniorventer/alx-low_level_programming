#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: The head of the linked list
 *
 * Return: size_t (number of nodes)
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
{
	printf("%d\n", cursor->n);
	count += 1;
	cursor = cursor->next;
}

	return (count);
}
