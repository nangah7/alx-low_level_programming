#include <stdio.h>
#include <unistd.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
*/
int main(void)
{
	int no;
	
	for (no = 0; no < 10; no++)
	{
		putchar((no % 10) + '0');
	}
	putchar('\n');
	return (0);
}
