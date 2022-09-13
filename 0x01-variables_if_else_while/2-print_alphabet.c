#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char ad = 'a';

	while (ad <= 'z')
	{
		putchar(ad);
		ad++;
	}
	putchar('\n');
	return (0);
}
