#include "shell.h"

/**
 * convert_number - i to a converter
 * @num: integer
 * @base: base
 * @flags: flags
 *
 * Return: string
 */

char *convert_number(long int num, int base, int flags)
{
	static char *arr;
	static char buffer[50];
	char sn = 0;
	char *ptr;
	unsigned long n = num;

	if (!(flags & CONV_UN) && num < 0)
	{
		n = -num;
		sn = '-';
	}
	arr = flags & CONV_LOW ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = arr[n % base];
		n /= base;
	} while (n != 0);
	if (sn)
		*--ptr = sn;
	return (ptr);
}
