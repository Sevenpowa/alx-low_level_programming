#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a newline
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char lowercase;

	lowercase  = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
