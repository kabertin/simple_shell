#include "shell.h"

/**
 * print_list - prints string from list
 * @h_ptrh: pointer to the head
 * Return: size
 */
size_t print_list(const list_t *h_ptr)
{
	size_t i = 0;

	while (h_ptr)
	{
		_puts(h_ptr->str ? h_ptr->str : "(nil)");
		_puts("\n");
		h_ptr = h_ptr->next;
		i++;
	}
	return (i);
}
