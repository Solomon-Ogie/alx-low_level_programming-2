#include <stdio.h>
#include "main.h"

/**
 * main - writes a program that prints its name
 * if you rename the program, it will print the new name
 * compile it again
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: this returns to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc:
	return (0);
}
