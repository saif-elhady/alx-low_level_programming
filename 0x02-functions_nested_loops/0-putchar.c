#include <stdio.h>
#include <string.h>

/**
 * main - Prints "Programming is like building a multilingual
 *                puzzle, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char str [] = "_putchar";
	int i = 0;

	for (i =0; i <= (int) strlen (str); i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
	return (0);
}
