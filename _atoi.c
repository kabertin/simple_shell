#include "shell.h"

/**
 * _atoi - string to integer fx
 * @s: the string to convert
 * Return: the nummber from string & 0
 */

int _atoi(char *s)
{
	int flag;
	int i;
	int tn = 1;
	int out;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			tn *= -1;
		if ([i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		out = -result;
	else
		out = result;
	return(out);
}
