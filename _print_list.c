#include "shell.h"

/**
 * _print_list - function printing elements of a list
 * @x: pointer to first  node
 * Return: list size
 */
size_t _print_list(const list_t *x)
{
	size_t a = 0;

	while (x)
	{
		_puts(convert_number(x->nbr, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(x->string ? h->string : "(nil)");
		_puts("\n");
		x = x->next;
		a++;
	}
	return (a);
}
