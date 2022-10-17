#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0
*/
int main(void)
{
	char lCase;

	for (lCase = 'a'; lCase <= 'z'; lCase++)
	{
		putchar(lCase);
	}
	putchar('\n');
	return (0);
}
