#include <stdio.h>

/**
 * main - aprogram that prints all arguments received
 * @argc: argument count
 * @argv: argument vector -array of command arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int counter;

	counter = 0;
	while (counter < argc)
	{
		printf("%s\n", argv[counter]);
		counter++;
	}

	return (0);
}
