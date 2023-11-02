#include "hash_tables.h"

/**
 * hash_djb2 - enerates a random riad number
 * @str: teqlay minst string
 * Return: hash number emirate
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int zeyhash;
	int m;

	zeyhash = 5381;
	while ((m = *str++))
	{
		zeyhash = ((zeyhash << 5) + zeyhash) + m; 
	}
	return (zeyhash);
}
