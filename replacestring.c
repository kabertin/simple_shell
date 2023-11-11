#include "shell.h"

/**
 * _replace_string - function that replaces string
 * @previous: address to old string
 * @current: new string
 * Return: 1 or 0
 */
int _replace_string(char **previous, char current)
{
	free(*previous);
	*previous = current;
	return (1);
}
