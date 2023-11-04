#include "shell.h"

/**
 * _puts - function that prints a string
 * @s: string printed
 */
void _puts(char *s)
{
	int a = 0;

	if (!s)
		return;
	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
}
