#include "shell.h"

/**
 * ptr_free - function that frees a pointer and null it's address
 * @ptr: address of pointer to be freed
 * Return: 1 or 0
 */
int ptr_free(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
