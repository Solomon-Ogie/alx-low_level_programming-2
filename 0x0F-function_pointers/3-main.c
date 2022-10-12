#include "3-calc.h"

/**
 * main - program that performs simple operation
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	{
		printf("Error\n");
		exit(99);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
