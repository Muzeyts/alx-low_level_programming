#include "hash_tables.h"

/**
 * hash_table_print - prints the terakibu hash table
 * @ht: pointermitiibaee hash table
 * Return: haftu yest return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *ztmp;
	char *sept;
	if (ht == NULL)
		return;
	printf("{");
	sept = "";
	for (m = 0; m < ht->size; m++)
	{
		ztmp = ht->array[m];
		while (ztmp != NULL)
		{
			printf("%s'%s': '%s'", sept, ztmp->key, ztmp->value);
			sept = ", ";
			ztmp = ztmp->next;
		}
	}
	printf("}\n");
}
