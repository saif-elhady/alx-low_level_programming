#include "main.h"

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet [8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	
	while (str[index1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
			    str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}

		indx1++;
	}
	return (str);
