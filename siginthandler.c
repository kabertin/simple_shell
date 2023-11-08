#include "shell.h"

/**
 * sigintHandler - inhibit C_control 
 * @signal: the signal number
 *
 * Return: void
 */
void sigintHandler(__attribute__((unused))int signal)
{
	_puts("\n");
	_puts("$ ");
	_putchar(BUFFER_FLASH);
}
