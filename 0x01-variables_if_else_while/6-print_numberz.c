#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)
{
	int x = 0;
	
	while(x < 10)
	{
		putchar('0' + x);
		x++;
	}

	putchar('\n');
	return (0);
}
