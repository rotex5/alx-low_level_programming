#include <stdio.h>
#include <stdlib.h>
/**
 * main - aprogram that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector -array of command arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int count;
	int mul;
	int a, b;

	count = argc;

	if (count < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{	a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}

	return (0);
}
