#include "main.h"

/**
 * get_endianness - This checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int b;
	char *c;

	b = 1;
	c = (char *) &b;

	return ((int)*c);
}
