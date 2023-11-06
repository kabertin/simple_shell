#include "shell.h"

/**
 * is_delimiter - check whether is a delimiter
 * @d: argument to check
 * @del: a string to check in
 * Return: true 1 & 0 false
 */

int is_delimiter(char d, char *del)
{
	while (*del)
		if (*del++ == d)
			return (1);
	return(0);
}
