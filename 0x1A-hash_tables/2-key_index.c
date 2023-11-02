#include "hash_tables.h"

/**
 * key_index - imf  generates a distributed index
 * @key: key passedtire genzen
 * @size: size qelala  hash tables
 * Return: ke einqskasey index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
