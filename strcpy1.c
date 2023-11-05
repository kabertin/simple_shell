#include "shell.h"

/**
 * _strcpy1 - function copying a string
 * @d: where a string is copied to
 * @s: the copied string
 * @c: number of character to copy
 * Return: copied string
 */
char *_strcpy1(char *d, char *s, int c)
{
	int a, b;
	char *r = d;

	a = 0;
	while (s[a] != '\0' && a < c - 1)
	{
		d[a] = s[a];
		a++;
	}
	if (a < c)
	{
		b = a;
		while (b < c)
		{
			d[b] = '\0';
			b++;
		}
	}
	return (r);
}
