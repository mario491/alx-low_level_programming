#include "main"

/**
 * print_last_digit - function to print last digits nr
 * @nr: target parament
 * Return: value of last digi
 */

int print_last_digit(int nr)

{
	int last_digit = nr % 10;

	if (last_digit < 0)

		last_digit *= -1;

	_putchar(last_digit + '0');

	return (0);
}
