#include "shell.h"

/**
 * _stringcmp - function that compares to strings
 * @str1: first string
 * @str2: second string
 * Return: -, + or 0
 */
int _stringcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}
