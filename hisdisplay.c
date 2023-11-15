#include "shell.h"
/**
 * _his_display - function displaying history
 * @cmd: command
 * @stat: status
 * Return: 0 or -1
 */
int _his_display(__attribute__((unused))char **cmd, __attribute__((unused))int stat)
{
	char *fn = ".simple_shell_history";
	FILE *f;
	char *l = NULL;
	size_t x = 0;
	int count = 0;
	char *y;

	f = fopen(fn, "r");
	if (f == NULL)
	{
		return (-1);
	}
	while ((_getline(&l, &x, f)) != -1)
	{
		count++;
		y = _itoa(count);
		PRINTER(y);
		free(y);
		PRINTER(" ");
		PRINTER(l);
	}
	if (l)
		free(l);
	fclose(f);
	return (0);
}
