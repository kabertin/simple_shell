#include "shell.h"

/**
 * print_num_int - Print Num
 * @num: Integer
 * Return: void
 */
void print_num_int(int num)
{
	unsigned int y = num;

	if (num < 0)
	{
		_putchar('-');
		y = -y;
	}
	if ((y / 10) > 0)
		print_num(y / 10);
	_putchar(y % 10 + '0');
}
