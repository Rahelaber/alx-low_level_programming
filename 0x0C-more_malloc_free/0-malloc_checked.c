#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked-shows memory using malloc
 * @b: number of bytes to  be shown
 *
 * Return: a pointer to the presented memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
