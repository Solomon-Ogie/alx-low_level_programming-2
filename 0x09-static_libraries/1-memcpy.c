#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: a pointer to the memory area to copy @src into.
 * @src: the source buffer to copy characters from.
 * @n: the number of bytes to copy from @src.
 *
 * Return: a pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
