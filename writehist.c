#include "shell.h"
/**
 * write_hist - function writting history
 * @info: parameter
 * Return: 1 or -1
 */
int write_hist(info_t *info)
{
	ssize_t filedesc;
	char *fn = get_history(info);

	list_t *index = NULL;

	if (!fn)
		return (-1);
	filedesc = open(fn, O_CREAT | O_TRUNC | O_RDWR, 0644);
	free(fn);
	if (filedesc == -1)
		return (-1);
	for (index = info->history; index; index = index->next)
	{
		_putsfile(index->str, filedesc);
		_putfiledes('\n', filedesc);
	}
	_putfiledes(BUFFER_FLASH, filedesc);
	close(filedesc);
	return (1);
}
