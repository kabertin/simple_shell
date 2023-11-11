#include "shell.h"

/**
 * node_start - function that returns node whose string start with prefix
 * @index: pointer to head
 * @p: string
 * @c: next character after p
 * Return: match node or NULL
 */
list_t *node_start(list_t *index, char *p, char c)
{
	char *b = NULL;

	while (index)
	{
		b = begin_with(index->string, p);
		if (b && ((c == -1) || (*b == c)))
			return (index);
		index = index->next;
	}
	return (NULL);
}
