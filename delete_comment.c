#include "shell.h"

/**
 * delete_comment - replaces '#' with '\0'
 * @buffer: the string to modify
 * Return: Always 0;
 */

void delete_comment(char *buffer)
{
	int i;

	for (i = 0; buffer[i] != '\0'; i++)
		if (buffer[i] == '#' && (!i || buffer[i - 1] == ' '))
		{
			buffer[i] = '\0';
			break;
		}
}
