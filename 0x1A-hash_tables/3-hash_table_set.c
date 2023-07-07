#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * hash_table_set - add a new map to the hash_tables
 * @ht: hash table where map is to be add
 * @key: key of the map
 * @value: value of the map
 * Return: 1 on Success, 0 on Failure
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *map, *h;

	if (!ht || !key || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	h = ht->array[idx];

	while (h)
	{
		if (strcmp(h->key, key) == 0)
		{
			free(h->value);
			h->value = strdup(value);
			return (1);
		}
		h = h->next;
	}

	map = malloc(sizeof(*map));
	if (!map)
	{
		free(map);
		map = NULL;
		return (0);
	}
	map->key = strdup(key);
	map->value = strdup(value);
	map->next = ht->array[idx];
	ht->array[idx] = map;

	return (1);
}
