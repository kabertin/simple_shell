#include "shell.h"

/**
 * add_node - node to the beginning
 * @head: head ptr
 * @str: str arg
 * @num: index
 * Return: size
 */
list_t *add_node(list_t **head, const char *str, int num)
{
	list_t *head_new;

	if (!head)
		return (NULL);
	head_new = malloc(sizeof(list_t));
	if (!head_new)
		return (NULL);
	_memset((void *)head_new, 0, sizeof(list_t));
	head_new->num = num;
	if (str)
	{
		head_new->str = _strdup(str);
		if (!head_new->str)
		{
			free(head_new);
			return (NULL);
		}
	}
	head_new->next = *head;
	*head = head_new;
	return (head_new);
}
