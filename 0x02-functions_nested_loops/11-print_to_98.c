#include "main.h"
#include "stdio.h"


/**
 * print_to_98 - print  all nr from input 98
 * @nr: start number
 */

void print_to_98(void)
{
	if (nr >= 98)
	{
		while (nr > 98)
			printf("%d, ", n--);
		printf("%d\n", nr);
	}
	else
	{
		while (nr < 98)
			printf("%d, ", nr++);
		printf("%d\n", nr);
	}
}

