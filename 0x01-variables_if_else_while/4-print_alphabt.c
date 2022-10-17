#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
*/
int main(void)
{
	char lAlpha;

	for (lAlpha = 'a'; lAlpha <= 'z'; lAlpha++)
	{
		if (lAlpha != 'e && lAlpha != 'q')
			putchar(lAlpha);
	}
	putchar('\n');
	return (0);
}
