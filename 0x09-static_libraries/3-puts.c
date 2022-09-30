#include <stdio.h>
#include "main.h"
/**
 * _puts - prints to a string
 * @str: string to print
 *
 * Description: print a string
 * Return: No error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
