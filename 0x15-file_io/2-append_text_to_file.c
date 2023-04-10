#include "main.h"
/**
 * main - check how the code is
 * @ac: 1st parameter
 * @av: 2nd parameter
 * Return: always 0
 */
int main(int ac, char **av)
{
	int abc;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	abc = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", abc);
	return (0);
}
