#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string.
 *
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int ooa = 1;
	unsigned int mm = 0;

	if (b == NULL)
		return (0);

	for (ooa = 0; b[ooa] != '\0'; ooa++)
	{
		if (b[ooa] != '0' && b[ooa] != '1')
		{
			return (0);
		}
		mm <<= 1;
		if (b[ooa] == '1')
		{
			mm |= 1;
		}
	}
	return (mm);
}
