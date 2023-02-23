#include "main.h"

/**
 * positive_or_negative - checks if given number is +, - or 0
 * Return: nothing on success
 */
void positive_or_negative(int i)
{
	int num;
	scanf("%d", &num);
	
	if (i > 0)
		printf("%d is positive\n", num);
	else if (i < 0)
		printf("%d is negative\n", num);
	else
		printf("%d is zero\n", num);
}
