#include "shell.h"

/**
 * print_error1 - get Error on typed
 * @input:User Input
 * @c: Count Loop
 * @av: Name of program
 * Return: Void
 */

void print_error1(char *input, int c, char **av)
{
	char *error;

	PRINTER(av[0]);
	PRINTER(": ");
	error = _itoa(c);
	PRINTER(error);
	free(error);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n");
}
