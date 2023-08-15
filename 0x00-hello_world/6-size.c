#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 (success)
 */

int main(void)
{
printf("size of int: %ld byte(s)\n", sizeof(int));
printf("size of char: %ld byte(s)\n", sizeof(char));
printf("size of long: %ld byte(s)\n", sizeof(long));
printf("size of long long int: %ld byte(s)\n", sizeof(long long));
printf("size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
