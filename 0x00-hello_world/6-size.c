#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 (success)
 */

int main(void)
{
printf("The size of int: %ld byte(s)\n", sizeof(int));
printf("The size of char: %ld byte(s)\n", sizeof(char));
printf("The size of long: %ld byte(s)\n", sizeof(long));
printf("The size of long long int: %ld byte(s)\n", sizeof(long long));
printf("The size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
