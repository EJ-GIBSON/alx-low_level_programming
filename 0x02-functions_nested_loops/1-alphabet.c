#include "main.h"

/**
 * print_alphabet - Entry point
 * Description -> A function that prints the alphabet, in lowercas
 * Return: Always 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
