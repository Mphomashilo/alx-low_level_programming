#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory
 * @b: the size of the memory
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)

{
	void *p;

	p = malloc(b);

	if (p == NULL)
	exit(98);
	return (p);
}
