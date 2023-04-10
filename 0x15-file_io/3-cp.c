#include "main.h"
#include <stdio.h>
/**
 * err_file - copy other file contents
 * @file_from: fle where contents are copied from
 * @file_to: file where contents are copied to
 * @argv: argument vector
 *
 * Return: nothing
 */
void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copyy from one file to another
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: alwyas 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, i;
	ssize_t a, b;
	char bufferaaaa[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to")
			exit(97);
	}
	file_from = open(argv[1],O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY |O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	a = 1024;
	while (a ==1024)
	{
		a = read(file_from, buffer, 1024);
		if (a == -1)
			err_file(-1, 0, argv);
		b = write(file_to, buffer, a);
		if (b == -1)
			err_file(0, -1, argv);
	}
	i = close(file_from;
			if (1 == -1)
			(
			 dprintf(STDERR_FILENO, "Errot:Can't close fd %d\n", file_from);
			 exit(100);
			 }
			 return(0);
			 }


