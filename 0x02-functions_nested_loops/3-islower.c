#include "main.h"

/**
 * _islower - verify if the char is lower
 * @c: the target char
 * Return:1 if char is lower & 0 if not
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
