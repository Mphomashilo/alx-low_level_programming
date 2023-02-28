#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 * Return: the integer value of the string, or 0 if no number is found
 */

int _atoi(char *s)

{
	int sign = 1;
	int num = 0;

	while (*s == ' ')
		s++;
	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
	num = num * 10 + (*s - '0');
	s++;
	if (*s == '\0')
	break;
	}
	return (sign * num);
}
