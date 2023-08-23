#include "main.h"
/**
 * _strcpy -copies the string pointed to by src
 * include the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in wich we copy the string
 * @src: string to be copiued
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
int len, i;

len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}