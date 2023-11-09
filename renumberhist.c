#include "shell.h"

/**
 * renumber_hist - renumber history
 * @info: parameter
 * Return: new history count
 */
int renumber_hist(info_t *info)
{
	list_t *index = info->history;
	int a = 0;

	while (index)
	{
		index->nbr = a++;
		index = index->next;
	}
	return (info->historycount = 1);
}
