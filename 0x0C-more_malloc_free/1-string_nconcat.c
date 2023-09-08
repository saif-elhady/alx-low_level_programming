#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *s3;
	int len = 0;

	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}


	for (i = 0; i < n; i++)
	{
		s3[j] = s2[i];
		j++;
	}
	i =0;
	while (s3[i] != '\0')
	{
		len++;
		i++;
	}

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	void *s3 =  malloc(sizeof(char) * len + 1);

	if (s3 == NULL)
		return (NULL);

	s3[len] = '\0';
	return (s3);
}
