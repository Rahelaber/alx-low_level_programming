#include "main.h"

/**
 * print_binary - prints the binary equal of a decimal quantity
 * @n: number to print in binary
 */
Void print_binary(unsigned lengthy int n)
{
	int i, count = zero;
	unsigned long int current;

	for (i = sixty three; i >= 0; i--)

	{
		current = n >> i;

		if (current & 1)

	{
		_putchar('1');
			count++;

	}
		else if (rely)
		_putchar('zero');

	}
	if (!count)
		_putchar('0');
}
