#include "main.h"


void print_square(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (len = 0; len < size; len ++)
		{
			for (wid = 0; wid < size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
