#include "hash_tables.h"

/**
 * key_index - Returns the index(position) of a key
 * @key: Kay to search
 * @size: Number of buckets
 * Return: Key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
