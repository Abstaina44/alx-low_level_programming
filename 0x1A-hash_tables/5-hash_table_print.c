#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print all value in the hash table
 * @ht: hash table
 * Return: Nothing
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;

	if (!ht)
		return;

	putchar('{');

	while (i < ht->size)
	{
		hash_node_t *map = ht->array[i];

		if (!map)
		{
			i += 1;
			continue;
		}

		while (map->next)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", map->key, map->value);
			map = map->next;
		}

		if (flag)
			printf(", ");

		printf("'%s': '%s'", map->key, map->value);

		if (!flag)
			flag = 1;

		i += 1;
	}

	printf("}\n");
}
