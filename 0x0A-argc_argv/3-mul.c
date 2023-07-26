#include <stdio.h>
#include <stdlib.h>
/**
 * main - rtint producet of argument
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 on success, 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
