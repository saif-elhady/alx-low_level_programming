#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int len;
	int i;
	int i3;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	s3 =  malloc(sizeof(char) * len);
	if (s3 == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		s3[i3++] = s1[i];

	for (i = 0; s2[i]; i++)
		s3[i3++] = s2[i];

	return (s3);
}
