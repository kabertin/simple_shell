#include "shell.h"

/**
 * rev_array - Reverse Array
 * @array: Array To Reverse
 * @length: Length Of Array
 * Return: Reversed Array
 */

void rev_array(char *array, int length)
{
	int i;
	char temporal;

	for (i = 0; i < (length / 2); i++)
	{
		temporal = array[i];
		array[i] = array[(length - 1) - i];
		array[(length - 1) - i] = temporal;
	}
}
