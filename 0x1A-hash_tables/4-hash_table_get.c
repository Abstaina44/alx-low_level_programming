#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_get - get key/value in hash table
 * @ht: hash table
 * @key: key of map to be retrieve
 * Return: map(key/value) on Success or NULL on Failure
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *map;

	if (!key || !ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	map = ht->array[idx];

	if (!map)
		return (NULL);

	while (map)
	{
		if (strcmp(map->key, key) == 0)
			return (map->value);
		map = map->next;
	}

	return (NULL);
}
