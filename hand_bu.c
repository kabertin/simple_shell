#include "shell.h"

/**
 * hand_bu - Handle Builtin Command
 * @cmand: Parsed Command
 * @error: statue of last Excute
 * Return: 0 Succes, -1 failure
 */

int hand_bu(char **cmand, int error)
{
	 builtin y[] = {
		{"cd", change_dir},
		{"env", dis_env},
		{"help", display_help},
		{"echo", echo_bul},
		{"history", history_dis},
		{NULL, NULL}
	};
	int i = 0;

	while ((y + i)->command)
	{
		if (_stringcmp(cmand[0], (y + i)->command) == 0)
		{
			return ((y + i)->func(cmand, error));
		}
		i++;
	}
	return (-1);
}
