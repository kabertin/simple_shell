#include "shell.h"

/**
 * print_num - Print Int
 * @num: Unisigned Integer
 * Return: Void
 */
void print_num(unsigned int num)
{
	unsigned int y = num;

	if ((y / 10) > 0)
		print_num(y / 10);

	_putchar(y % 10 + '0');
}
