#include "shell.h"

/**
 * _isalphabet - check whether it's a character
 * @d: the argument character
 * Return: 1 if alph. and 0 otherwise
 */

int _isalphabet(int d)
{
	if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
		return (1);
	else
		return (0);
}
