#include "main.h"

/**
 * flip_bits - number of bits you would need to flip.
 * @n: unsigned long int.
 * @m: unsigned long int.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int kd = 0;
	unsigned long int rd = n ^ m;
	int lep;

	for (lep = 0; lep < (int)(sizeof(unsigned long int) * 8); lep++)
	{
		kd += (rd >> lep) & 1;
	}

	return (kd);
}
