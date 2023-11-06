#include "shell.h"

/**
 * **str_word - function splitting string into words
 * @s: string to be splitted
 * @d: delimeter
 * Return: pointer to an array of strins or NULL
 */
char **str_word(char *s, char *d)
{
	a, b, c, d, e = 0;
	char **f;

	if (s == NULL || s[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (a = 0; s[a] != '\0'; a++)
		if (!is_delimeter(s[a], d) && (is_delimeter(s[a + 1], d) || !s[a + 1]))
			e++;
	if (e == 0)
		return (NULL);
	f = malloc((1 + e) * sizeof(char *));
	if (!F)
		return (NULL);
	for (a = 0, b = 0; b < e; b++)
	{
		while (is_delimeter(s[a], d))
			a++;
		c = 0;
		while (!is_delimeter(s[a + c], d) && s[a + c])
			c++;
		f[b] = malloc((c + 1) * sizeof(char));
		if (!f[b])
		{
			for (c = 0; c < b; c++)
				free(f[c]);
			free(f);
			return (NULL);
		}
		for (d = 0; d < c; d++)
			f[b][d] = s[a++];
		f[b][d] = 0;
	}
	f[b] = NULL;
	return (f);
}
