#include "shell.h"

/**
 * str_free - function to free string of strings
 * @str: string of strings
 * Return: void
 */
void str_free(char **str)
{
	char **i = str;

	if (!str)
		return;
	while (*str)
		free(*str++);
	free(a);
}

