#include "main.h"

/**
 * wildcmp - compares two strings with * wildcard
 * @s1: the first string to compare
 * @s2: the second string to compare (can contain * wildcard)
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)

{
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
	if (*(s2 + 1) == '\0')
	return (1);
	while (*s1 != '\0')
	{
	if (wildcmp(s1, s2 + 1))
	return (1);
	s1++;
	}
	}
	return (0);
}
