#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-get_op_func.h"

/**
 * main - Performs simple operations
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);	

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	
	return (0);
}
