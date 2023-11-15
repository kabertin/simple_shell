#include "shell.h"

/**
 * sig_hand - function handling ^c
 * @s: signal captured
 * Return: void
 */
void sig_hand(int s)
{
	if (s == SIGNIT)
	{
		PRINTER("\n$ ");
	}
}
