#include "shell.h"

/**
 * get_node_index - function getting the node's index
 * @h: pointer to head node
 * @node: pointer to node
 * Return: node's index or -1
 */
ssize_t get_node_index(list_t *h, list_t *node)
{
	size_t a = 0;

	while (h)
	{
		if (h == node)
			return (a);
		h = h->next;
		a++;
	}
	return (-1);
}
