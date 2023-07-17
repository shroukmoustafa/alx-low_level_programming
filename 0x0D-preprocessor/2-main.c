#include <stdio.h>
#define PRINT_FILENAME printf("%s\n", __FILE__)

int main(void)
{
	PRINT_FILENAME;
	return (0);
}
