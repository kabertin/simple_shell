#include "shell.h"

/**
 * builder - Build Command
 * @tok: Excutable Command
 * @val: Dirctory Conatining Command
 * Return: Parsed Full Path Or NULL once Failed
 */

char *builder(char *tok, char *val)
{
	char *cmand;
	size_t length;

	length = _strlen(val) + _strlen(tok) + 2;
	cmand = malloc(sizeof(char) * length);
	if (cmand == NULL)
	{
		return (NULL);
	}
	_memset(cmand, 0, len);
	cmand = _string_conc(cmand, val);
	cmand = _string_conc(cmand, "/");
	cmand = _string_conc(cmand, tok);
	return (cmand);
}
