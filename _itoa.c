#include "shell.h"

/**
 * _itoa - changes Integer To Char
 * @num: Int To Convert
 * Return: Pointer to char
 */

char *_itoa(unsigned int num)
{
	int length = 0;
	int i = 0;
	char *st;

	length = integer_len(num);
	st = malloc(length + 1);
	if (!st)
		return (NULL);
	*st = '\0';
	while (num / 10)
	{
		st[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	st[i] = (num % 10) + '0';
	rev_array(st, length);
	st[i + 1] = '\0';
	return (st);
}
