#include "shell.h"

/**
 * check_delimiter - Checks delimiter
 * @ch: Character To Check
 * @str: String To Check
 * Return: 1 Succes, 0 Failed
 */
unsigned int check_delimiter(char ch, const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (ch == str[i])
			return (1);
	}
	return (0);
}
