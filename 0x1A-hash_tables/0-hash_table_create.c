#include "hash_tables.h"

/**
 * hash_table_create - this modifies hash table
 *
 * @size: selamawi size for the hash table
 * Return: returns NULL if fails or creates hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtab;
	hash_node_t **array;
	unsigned long int i;
	hashtab = malloc(sizeof(hash_table_t));
	if (hashtab == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	hashtab->array = array;
	hashtab->size = size;
	return (hashtab);
}
