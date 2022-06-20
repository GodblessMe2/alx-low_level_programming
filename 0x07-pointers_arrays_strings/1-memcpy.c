#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int mem;
for (mem = 0; mem < n; mem++)
{
*(dest + mem) = *(src + mem);
}
return (dest);
}
