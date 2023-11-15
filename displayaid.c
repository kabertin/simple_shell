#include "shell.h"
/**
 * _display_aid - function displaying help for builtin
 * @command: command
 * @x: last command executed
 * Return: 0 or -1
 */
int _display_aid(char **command, __attribute__((unused))int x)
{
	int filedesc, f, r = 1;
	char s;

	filedesc = open(command[1], O_RDONLY);
	if (filedesc < 0)
	{
		perror("Error");
		return (0);
	}
	while (r > 0)
	{
		r = read(filedesc, &s, 1);
		f = write(STDOUT_FILENO, &s, r);
		if (f < 0)
		{
			return (-1);
		}
	}
	_putchar('\n');
	return (0);
}

