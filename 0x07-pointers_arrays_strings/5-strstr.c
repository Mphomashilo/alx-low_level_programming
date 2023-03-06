#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
	char *mpho = haystack;
	char *carl = needle;

	while (*mpho == *carl && *carl != '\0')
	{
	mpho++;
	carl++;
	}
	if (*carl == '\0')
	return (haystack);
	}
	return (NULL);
}
