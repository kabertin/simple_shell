#include "shell.h"

/**
 * myhistory - shows the history list
 * @his: contains potential arguments
 * Return: 0
 */
int hist_display(info_t *his)
{
	print_list(his->history);
	return (0);
}
