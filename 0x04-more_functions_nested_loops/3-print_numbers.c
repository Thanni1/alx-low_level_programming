#include "main.h"

/**
 * print_number - prints number 0 - 9
 * Return: no return
 */
* print_numbers - function that prints the numbers, from 0 to 9.
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	char c;

	for (c = '0'; c <= '9'; c++)
	_putchar(c);
	_putchar('\n');
}
