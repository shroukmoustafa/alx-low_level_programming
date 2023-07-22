#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function to do simple operations
 * */

int main(int argc, char **argv)
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num1 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		 exit(99);
	}
	operation = get_op_func(argv[2]);
	printf("%d\n",operation(num1, num2));
	return (0);
}
