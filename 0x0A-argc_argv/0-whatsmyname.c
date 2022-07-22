#include <stdio.h>

/**
 * main - aprogram that prints its name
 * @argc: argument count
 * @argv: argument vector -array of command arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
