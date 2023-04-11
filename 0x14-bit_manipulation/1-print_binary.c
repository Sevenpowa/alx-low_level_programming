#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary representation.
 *
 * Return: nothing.
 */
void print_binary(unsigned long int k)
{
	if (k > 1)
		print_binary(k >> 1);

	_putchar((k & 1) ? '1' : '0');
}
