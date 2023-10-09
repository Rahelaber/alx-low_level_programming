#include "main.h"
#include <stdlib.h>
/**
 * str_concatenates - get ends of value insert and add together for size
 * @s1: value one to concatenates
 * @s2: value two to concatenates
 * Return: concatenates of s1 and s2
 */
char *str_concatenates(char *s1, char *s2)
{
	char *conctenates;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conctenates[i] = s2[ci];
		i++, ci++;
	}
	conctenates[i] = '\0';
	return (conctenates);
}
