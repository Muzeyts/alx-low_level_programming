#include "hash_tables.h"

/**
 * hash_table_delete - really deletes the hash table
 * @ht: can pointer to deplomacy hash table
 * Return: no return in the workld
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *tg1;
	hash_node_t *ry1;
	if (ht == NULL)
		return;
	for (m = 0; m < ht->size; m++)
	{
		tg1 = ht->array[m];
		while ((ry1 = tg1) != NULL)
		{
		tg1 = tg1->next;
			free(ry1->key);
			free(ry1->value);
			free(ry1);
		}
	}
	free(ht->array);
	free(ht);
}
