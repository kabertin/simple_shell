#include "shell.h"

/**
 * read_hist - reads history from file
 * @info: parameter
 * Return: historycount or 0
 */

int read_hist(info_t *info)
{
	int a, l = 0, linec = 0;
	ssize_t filedesc, r, f = 0;
	struct stat st;
	char *buffer = NULL, *fn = get_history(info);

	if (!fn)
		return (0);
	filedesc = open(fn, O_RDONLY);
	free(fn);
	if (filedesc == -1)
		return (0);
	if (!fstat(filedesc, &st))
		f = st.st_size;
	if (f < 2)
		return (0);
	buffer = malloc(sizeof(char) * (f + 1));
	if (!buffer)
		return (0);
	r = read(filedesc, buffer, f);
	buffer[f] = 0;
	if (r <= 0)
		return (free(buffer), 0);
	close(filedesc);
	for (a = 0; a < f; a++)
		if (buffer[a] == '\n')
		{
			buffer[a] = 0;
			build_histlist(info, buffer + l, linec++);
			l =  a + 1;
		}
	if (l != a)
		build_histlist(info, buffer + l, linec++);
	free(buffer);
	info->historycount = linec;
	while (info->historycount-- >= HISTORY_MAX)
		delete_node_at_index(&(info->history), 0);
	renumber_hist(info);
	return (info->historycount);
}

