#include "shell.h"

/**
 * list_to_str - turns list to string
 * @h: pointer to head
 * Return: array of strings
 */
char **list_to_str(list_t *h)
{
	list_t *index = h;
	size_t a = list_length(h), b;
	char **s;
	char *string;

	if (!h || !a)
		return (NULL);
	s = malloc(sizeof(char *) * (a + 1));
	if (!s)
		return (NULL);
	for (a = 0; index; index = index->next, a++)
	{
		string = malloc(_strlen(index->string) + 1);
		if (!string)
		{
			for (b = 0; b < a; b++)
				free(s[b]);
			free(s);
			return (NULL);
		}
		string = _strcpy(string, index->string);
		s[a] = string;
	}
	s[a] = NULL;
	return (s);
}


