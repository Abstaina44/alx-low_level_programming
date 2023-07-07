#include "hash_tables.h"

/**
 * key_index - returns the index of the key in the array
 * @key: key to be return
 * @size: size of the array
 * Return: index of the key in the array
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
