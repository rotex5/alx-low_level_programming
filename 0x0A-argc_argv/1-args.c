#include <stdio.h>

/**
 * main - aprogram that prints the number of argumets passed into it
 * @argc: argument count
 * @argv: argument vector -array of command arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num;
	(void) argv;

	num = argc - 1;

	printf("%d\n", num);

	return (0);
}
