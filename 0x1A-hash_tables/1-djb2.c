#include "hash_tables.h"

/**
 * hash_djb2 - Hash function that implementins djb2 algorithm
 *
 * @str: The string
 *
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashtable;
	int i;

	hashtable = 5381;
	while ((i = *str++) != 0)
		hashtables = ((hashtable << 5) + hashtable) + i; /* hashtable* 33 + i */
	return (hashtable);
}
