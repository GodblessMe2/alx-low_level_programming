#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from.
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{

int index = 0, src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\0';

return (index);
}
