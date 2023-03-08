#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)

{
	/* check for base cases */
	if (n <= 1)
	return (0);
	if (n == 2)
	return (1);
	if (n % 2 == 0)
	return (0);

	/* check odd numbers */
	int i;

	for (i = 3; i * i <= n; i += 2)
	if (n % i == 0)
	return (0);

	/* if we get here, n is prime */
	return (1);
}
