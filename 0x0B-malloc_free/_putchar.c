#include <unistd.h>

/**
 * _putchar - writes thecharacter c to stdout
 * @c: The character to print
 * Return: 1 on success
 * On error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
