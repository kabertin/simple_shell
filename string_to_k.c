#include "shell.h"

/**
 * string_to_k - A String Into Token
 * @str: String
 * @delimiter: Delimiter
 * Return: Pointer To The Next Token
 */
char *string_to_k(char *str, const char *delimiter)
{
	unsigned int i;
	static char *zt;
	static char *mh;

	if (str != NULL)
		mh = str;
	zt = mh;
	if (zt == NULL)
		return (NULL);
	for (i = 0; zt[i] != '\0'; i++)
	{
		if (check_delimiter(ts[i], delimiter) == 0)
			break;
	}
	if (mh[i] == '\0' || mh[i] == '#')
	{
		mh = NULL;
		return (NULL);
	}
	zt = mh + i;
	mh = zt;
	for (i = 0; mh[i] != '\0'; i++)
	{
		if (check_delimiter(mh[i], delimiter) == 1)
			break;
	}
	if (mh[i] == '\0')
		mh = NULL;
	else
	{
		mh[i] = '\0';
		mh = mh + i + 1;
		if (*mh == '\0')
			mh = NULL;
	}
	return (zt);
}
