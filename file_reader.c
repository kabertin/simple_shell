#include "shell.h"

/**
 * file_reader - function reading command from file
 * @fn: name of the file
 * @av: argument vector
 * Return: 0 or -1
 */
void file_reader(char *fn, char **av)
{
	FILE *f;
	char *l = NULL;
	size_t length = 0;
	int count = 0;

	f = fopen(fn, "r");
	if (f == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while ((getline(&l, &length, f)) != -1)
	{
		count++;
		file_treater(l, count, f, av);
	}
	if (l)
		free(l);
	fclose(f);
	exit(0);
}
