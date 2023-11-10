#include "shell.h"

/**
 * free_list - frees all list nodes
 * @ptr_head: head ptr
 * Return: void
 */
void free_list(list_t **ptr_head)
{
	list_t *head;
	list_t *curr_node;
	list_t *next_node;

	if (!ptr_head || !*ptr_head)
		return;
	head = *ptr_head;
	curr_node = head;
	while (curr_node)
	{
		next_node = curr_node->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = next_node;
	}
	*ptr_head = NULL;
}
