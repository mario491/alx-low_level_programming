#include "main.h"

/**
 * _isalpha - check if it is an alphabet char
 * @c: the target char
 * Return: 1 if it is a letter & 0 if it is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

