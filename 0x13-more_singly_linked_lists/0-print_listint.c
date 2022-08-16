#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: The head of the linked list
 *
 * Return: size_t (number of nodes)
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)

	while (h)
	return (0);

	while (h)
{
	nodes += 1;
	printf("%d\n", h->n);
	h = h->next;
}


	return (nodes);
}
