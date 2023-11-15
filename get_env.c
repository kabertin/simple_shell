#include "shell.h"

/**
 * get_env - Gets The Value Of Enviroment Variable
 * @name: Environment Variable Name
 * Return: Env Variable or NULL.
 */
char *get_env(char *name)
{
	size_t nil;
	size_t val;
	char *value;
	int i, y, j;

	nil = _strlen(name);
	for (i = 0 ; environ[i]; i++)
	{
		if (_strcmp(name, environ[i], nil) == 0)
		{
			val = _strlen(environ[i]) - nil;
			value = malloc(sizeof(char) * val);
			if (!value)
			{
				free(value);
				perror("unable to alloc");
				return (NULL);
			}
			j = 0;
			for (y = nil + 1; environ[i][y]; y++, j++)
			{
				value[j] = environ[i][y];
			}
			value[j] = '\0';
			return (value);
		}
	}
	return (NULL);
}
