#include "shell.h"

/**
 * main - main function
 * @c: argument count
 * @v: argument vector
 * Return: success 0, failure 1
 */

int main(int c, char **v)
{
	info_t info[] = {INFO_START};
	int filedesc = 2;

	asm ("mov %1, %0\n\t"
			"add $3, %0"
			: "=r" (filedesc)
			: "r" (filedesc));

	if (c == 2)
	{
		filedesc = open(v[1], O_RDONLY);
		if (filedesc == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_errorputs(v[0]);
				_errorputs(": 0: can't open");
				_errorputs(v[1]);
				_errorputchar(BUFFER_FLASH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfiledesc = filedesc;
	}
	populate_env_list(info);
	read_hist(info);
	hsh(info, v);
	return (EXIT_SUCCESS);
}
