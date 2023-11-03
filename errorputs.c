#include "shell.h"

/**
 * _errorputs - function printing a string
 * @c: printed string
 */
void _errorputs(char *c)
{
	int a = 0;

	if (!c)
		return;
	while (c[a] != '\0')
	{
		_errorputchar(c[a]);
		a++;
	}
}

