#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char prAlpha;

	for (prAlpha = 'a'; prAlpha <= 'z'; prAlpha++)
		_putchar(prAlpha);

	_putchar('\n');
}
