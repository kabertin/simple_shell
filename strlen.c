#include "shell.h"

/**
 * _strlen - function that finds the length of a string
 * @str: string to be measured
 * Return: length of string
 */
int _strlen(char *str)
{
	int j = 0;

	if (!str)
		return (0);
	while (*str)
		j++;
	return (j);
}
