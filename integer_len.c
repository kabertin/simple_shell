#include "shell.h"

/**
 * integer_len - Determine Length Of Int
 * @number: Given Int
 * Return: Length Of Int
 */
int integer_len(int number)
{
	int length = 0;

	while (number != 0)
	{
		length++;
		number /= 10;
	}
	return (length);
}
