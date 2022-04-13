#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: arguments number
 * @argv: double pointer to arguments
 * Return: O for success
 */
int main(int argc, char *argv[])
{
	/* Variables for the two entry numbers */
	int num1 = 0, num2 = 0, calc = 0;
	/* If arguments is wrong */
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert arguments to numbers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	switch (argv[2][0])
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			calc = (*get_op_func(argv[2]))(num1, num2);
			printf("%d\n", calc);
		break;
		default:
			printf("Error\n");
			exit(99);
	}
	/* Print operation */
	return (0);
}
