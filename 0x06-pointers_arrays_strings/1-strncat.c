#include "main.h"

/**
 * _strncat - concatenate two strings using most
 * an inputed number of bytes from src
 * @dest: The string to be appened
 * @src: The string to be appened to destinstion
 * @n: The number of bytes from src to be appened to dest
 * Return: The pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
