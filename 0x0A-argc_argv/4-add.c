#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * check_num - check - there are digit string
 * @str: array str
 * Return: 0 Always
 */

int check_num(char *str)

{
	/*Variables being declared*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*string count*/
	{
	if (!isdigit(str[count])) /*checks the str if is there in digit*/
	{
		return (0);
	}
	count++;
	}
	return (1);
}

/**
 * main - prints the program name
 * @argc: the argument count
 * @argv: argument
 * Return: 0 Always
 */

int main(int argc, char *argv[])

{
	/*variables being declared*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*checks the whole array*/
	{
	if (check_num(argv[count]))
	{
	str_to_int = atoi(argv[count]); /*Atoi -- Converts the string to int*/
	sum += str_to_int;
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	count++;
	}
	printf("%d\n", sum);
	return (0);
}
