#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *          using two input paramaters
 *
 * @a: Input parameter 1
 * @b: Input parameter 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;
temp = *a;
*a = *b;
*b = temp;
}
