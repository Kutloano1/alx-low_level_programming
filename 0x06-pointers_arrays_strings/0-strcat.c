#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src, including the terminal
 *           null byte, to the end of the string pointed to by @dest.
 * @dest: a pointer to the string concatenated upon.
 * @src: the source string to be appended to @dest.
 *
 * Return: a pointer to the destination string @dest.
 */

char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++]
		dest_len++;

	for (index = 0; src[index]; index++)
	      dest[dest_len++] = src[index];

	return (dest);
}
