#include "shell.h"

/**
 * node_ind_del - deletes node at any point
 * @head: head ptr
 * @index: ind
 * Return: 1 success, 0 failure
 */
int node_ind_del(list_t **head, unsigned int index)
{
	list_t *curr_node;
	list_t *previous_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (0);

	if (!index)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node->str);
		free(curr_node);
		return (1);
	}
	curr_node = *head;
	while (curr_node)
	{
		if (i == index)
		{
			previous_node->next = curr_node->next;
			free(curr_node->str);
			free(curr_node);
			return (1);
		}
		i++;
		previous_node = curr_node;
		curr_node = curr_node->next;
	}
	return (0);
}
