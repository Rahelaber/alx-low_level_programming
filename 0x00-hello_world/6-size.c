#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 (success)
 */

int main(void)
{
printf(stderr, "Size of an int: %d byte(s)\n", sizeof(int));
printf(stderr, "Size of a char: %d byte(s)\n", sizeof(char));
printf(stderr, "Size of a long int: %d byte(s)\n", sizeof(long int));
printf(stderr, "Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf(stderr, "Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
