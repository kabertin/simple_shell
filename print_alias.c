#include "shell.h"

/**
 * _print_alias - function that prints alias string
 * @index: alias node
 * Return: 0 or 1
 */
int _print_alias(list_t *index)
{
	char *a = NULL, *b = NULL;

	if (index)
	{
		a = stchar(index->s, '=');
		for (b = index->s; b <= a; b++)
			_putchar(*b);
		_putchar('\'');
		_puts(p + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}
