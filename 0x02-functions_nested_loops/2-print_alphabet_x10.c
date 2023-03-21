#include "main.h"
/**
 * print_alphabet_x10(Jvoid) - prints alphabet 10 times
 *
 * Return: return void
 *
 */
void print_alphabet_x10(void|)
{
	char i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while(c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

