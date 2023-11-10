#include "shell.h"

/**
 * node_end_up - adds a node to the end
 * @head: head Ptr
 * @str: str field of node
 * @num: index
 * Return: size
 */
list_t *node_end_up(list_t **head, const char *str, int num)
{
	list_t *node_new;
	list_t *node;
	
	if (!head)
		return (NULL);

	node = *head;
	node_new = malloc(sizeof(list_t));
	if (!node_new)
		return (NULL);
	_memset((void *)node_new, 0, sizeof(list_t));
	node_new->num = num;
	if (str)
	{
		node_new->str = _strdup(str);
		if (!node_new->str)
		{
			free(node_new);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = node_new;
	}
	else
		*head = node_new;
	return (node_new);
}
