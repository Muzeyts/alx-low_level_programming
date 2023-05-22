#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get the another
 * @n: number one.
 * @m: number two.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int y;

	sum = 0;
	y = n ^ m;
	while (y)
	{
		sum += y & 1;
		y = y >> 1;
	}
	return (sum);
}
