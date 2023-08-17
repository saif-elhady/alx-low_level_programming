#include "main.h"
/**
 * a program that checks for a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
