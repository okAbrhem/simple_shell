#include <stdio.h>
#include <stdlib.h>

/**
* main - command line arguments
* @ac: argument count
* @av: argument vector
* Return: Always 0
*/

int main(int ac, char **av)
{
	int i;

	for (i = 1; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
