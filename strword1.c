#include "shell.h"
/**
 * **str_word1 - changes strings into words
 * @s: string
 * @d: delimeter
 * Return: pointer to array or NULL
 */
char **str_word1(char *s, char d)
{
	int x, y, z, o, n = 0;
	char **a;

	if (s == NULL || s[0] == 0)
		return (NULL);
	for (x = 0; s[x] != '\0'; x++)
		if ((s[x] != d && s[x + 1] == d) ||
				(s[x] != d && !s[x + 1]) || s[x + 1] == d)
			n++;
	if (n == 0)
		return (NULL);
	a = malloc((1 + n) * sizeof(char *));
	if (!a)
		return (NULL);
	for (x = 0, y = 0; y < n; y++)
	{
		while (s[x] == d && s[x] != d)
			x++;
		z = 0;
		while (s[x + z] != d && s[x + z] && s[x + z] != d)
			z++;
		a[y] = malloc((z + 1) * sizeof(char));
		if (!a[y])
		{
			for (z = 0; z < y; z++)
				free(a[z]);
			free(a);
			return (NULL);
		}
		for (o = 0; o < z; o++)
			a[y][o] = s[x++];
		a[y][o] = 0;
	}
	a[y] = NULL;
	return (a);
}
