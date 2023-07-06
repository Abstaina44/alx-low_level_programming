#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a new hash table
 * @size: size of the hash table to be created
 * Return: Pointer to the newly created hash table or NULL
 */


hash_table_t *hash_table_create(unsigned long size)
{
	hash_table_t *map;
	unsigned long i = 0;

	if (size <= 0)
		return (NULL);

	map = malloc(sizeof(*map));

	if (!map)
	{
		free(map);
		map = NULL;
		return (map);
	}

	map->size = size;
	map->array = malloc(sizeof(map->array) * map->size);

	if (!(map->array))
	{
		free(map->array);
		map->array = NULL;
		return (NULL);
	}

	while (i < size)
		map->array[i++] = NULL;

	return (map);
}
