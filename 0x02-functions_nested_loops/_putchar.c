#include "main.h"
#include <unistd.h>

/**
 * _putchar - print char c 
 * @c: char to print
 *
 * Return: On success 1
 */
int -putchar(char c)
{
	return (write(1,&c,1));
}

