#include "shell.h"

/**
 * is_alph - Checkwhether it is an alphabet
 * @ch: Character
 * Return: 1 True 0 false
 */

int is_alph(int ch)
{
if (((ch >= 97) && (ch <= 122)) || ((ch >= 65) && (ch <= 90)))
{
return (1);
}
else
{
return (0);
}
}
