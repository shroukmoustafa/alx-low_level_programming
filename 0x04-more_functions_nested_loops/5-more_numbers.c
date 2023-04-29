#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers, 
 *from 0 to 14, followed by a new line.
 * 
*/

void more_numbers(void)
{
	int i;
	int count;
	int num;
	for (i = 0; i < 10; i++)
	{ 
		for (count = 0; count <= 14; count++)
		{
		num = count;
		if (num > 9) 
		{ 
			_putchar(49);
			num = count % 10;
		}	
		_putchar(num + 48);
		}

	_putchar('\n');
	}
}
