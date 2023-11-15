#include "shell.h"

/**
 * command_pars - Input parsing
 * @in:User Input
 * Return: Array Of Parsed characters
 */
char **command_pars(char *in)
{
	char **token;
	char *tok;
	int i;
	int bu_size = BUFSIZE;

	if (in == NULL)
		return (NULL);
	token = malloc(sizeof(char *) * bu_size);
	if (!token)
	{
		pri_error("hsh");
		return (NULL);
	}
	tok = string_to_k(in, "\n ");
	for (i = 0; tok; i++)
	{
		token[i] = tok;
		tok = string_to_k(NULL, "\n ");
	}
	token[i] = NULL;

	return (token);
}
