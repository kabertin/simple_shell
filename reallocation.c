#include "shell.h"

/**
 *_realloc - Memory reallocation
 *@ptr: Pointer
 *@init_size: initial Size
 *@end_size: New Size
 *Return: Rellocated Memory address
 */
void *_reallocation(void *ptr, unsigned int init_size, unsigned int end_size)
{
	void *addr;

	if (end_size == init_size)
		return (ptr);
	if (end_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	addr = malloc(end_size);
	if (addr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		array_fill(addr, '\0', end_size);
		free(ptr);
	}
	else
	{
		copy_mem(addr, ptr, init_size);
		free(ptr);
	}
	return (addr);
}
