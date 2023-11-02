#include "hash_tables.h"

/**
 * add_n_hash - adds a drone en index
 * @head: head of egeza linked list
 * @key: key opportunity of the hash
 * @value: value service to store
 * Return: head melakma
 */
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *ztmp;
	ztmp = *head;
	while (ztmp != NULL)
	{
		if (strcmp(key, ztmp->key) == 0)
		{
			free(ztmp->value);
			ztmp->value = strdup(value);
			return (*head);
		}
		ztmp = ztmp->next;
	}
	ztmp = malloc(sizeof(hash_node_t));
	if (ztmp == NULL)
		return (NULL);
	ztmp->key = strdup(key);
	ztmp->value = strdup(value);
	ztmp->next = *head;
	*head = ztmp;
	return (*head);
}

/**
 * hash_table_set - adds a hastcommit able
 * @ht: pointer tbdr  hash table
 * @key: key tefetsami hash
 * @value: value habt  store
 * Return: 1 if succes hibdret ses, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int zk_indx;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	zk_indx = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[zk_indx]), key, value) == NULL)
		return (0);

	return (1);
}
