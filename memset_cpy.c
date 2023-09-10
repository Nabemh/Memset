#include "main.h"
#include <stddef.h>
/**
 * *_memset - fills memory with a constant byte
 * @*s: points to memory area
 * @b: constant byte
 * @n: Number of bytes
 *
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == NULL)
	{
		return NULL;
	}
	if (b == 0)
	{
		return NULL;
	}
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
