#include "shell.h"

/**
 * _atoierror - converts from string to integer
 * @s: the string to convert
 * Return: 0 no number, -1 on error
 */

int _atoierror(char *s)
{
	int i = 0;
	unsigned long int rest = 0;

	if (*s == '+')
		s++;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			rest *= 10;
			rest += (s[i] - '0');
			if (rest > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (rest);
}
