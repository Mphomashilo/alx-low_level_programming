#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: The amount of arguments
 * @argv: The array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])

{
	(void) argv; /*Overlook argv*/
	printf("%d\n", argc - 1);
	return (0);
}
