#include "shell.h"

/**
 * _strchar - function that locates a character in a string
 * @str: string
 * @chr: character to locate
 * Return: pointer to character
 */
char *_strchar(char *str, char chr)
{
	do {
		if (*str == chr)
			return (str);
	} while (*str++ != '\0');

	return (NULL);
i}
