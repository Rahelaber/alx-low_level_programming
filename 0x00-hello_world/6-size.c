#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 (success)
 */

int main(void)
{
printf("size of an int: %ld byte(s)\n", sizeof(int));
printf("size of a char: %ld byte(s)\n", sizeof(char));
printf("size of a long: %ld byte(s)\n", sizeof(long));
printf("size of a long long int: %ld byte(s)\n", sizeof(long long));
printf("size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
