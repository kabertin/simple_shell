#include "shell.h"

/** print_delimiter - prints a decimal
 * @input: the input
 * @filedesc: file descriptor
 * Return: number of characters printed
 */

int print_delimiter(int input, int filedesc)
{
	int (*__putchar)(char) = _putchar;
	unsigned int _abs_;
	unsigned int curr;
	int i, c;

	if (filedesc == STDERR_FILENO)
		__putchar = _errorputchar;
	if (input < 0)
	{
		_abs_ = -input;
		__putchar('-');
		c++;
	}
	else
		_abs_ = input;
	curr = _abs_;
	for (i = 1000000000; i > 1; i /= 10)
	{
		if (_abs_ / i)
		{
			__putchar('0' + curr / i);
			c++;
		}
		curr %= i;
	}
	__putchar('0' + curr);
	c++;

	return (c);
}
