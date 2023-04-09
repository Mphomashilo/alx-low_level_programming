#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: the chareacter that is being written
 * Return: 1
 * error, -1 is returned and errno is set arrcodingly
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
