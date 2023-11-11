#include "shell.h"

/**
 * list_length - finds length of a linked list
 * @x: pointer to first node
 * Return: length of list
 */
size_t list_length(const list_t *x)
{
	size_t a = 0;

	while (x)
	{
		x = x->next;
		a++;
	}
	return (a);
}
