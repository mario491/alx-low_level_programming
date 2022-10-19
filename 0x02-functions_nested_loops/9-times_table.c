#include "main.h"


/**
 * times_table - print 9 times tables
 */

void times_table(void)
{
	int nr, mul, pro;

	for (nr = 0; nr <= 9; nr++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			pro = nr * mul;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');
			putchar((pro % 10) + '0');
		}
		_putchar('\n');
	}
}
