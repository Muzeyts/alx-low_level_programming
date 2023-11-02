#include "hash_tables.h"

/**
 * hash_table_get - retrieves a vmitiyash ith a key
 * @ht: common pointer to the hash table
 * @key: key of misfan the hash
 * Return: value of theadditional hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int zindex;
	hash_node_t *ztemp;
	if (ht == NULL)
		return (NULL);
	if (key == NULL || *key == '\0')
		return (NULL);
	zindex = key_index((unsigned char *)key, ht->size);
	ztemp = ht->array[zindex];
	while (ztemp != NULL)
	{
		if (strcmp(ztemp->key, key) == 0)
			return (ztemp->value);
		ztemp = ztemp->next;
	}
	return (NULL);
}
