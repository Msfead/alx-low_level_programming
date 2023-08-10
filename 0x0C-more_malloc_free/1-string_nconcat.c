#include "main.h"
#include <stdio.h>

/**
*string_nconcat -  function that concatenates two strings. .
*@s1 : parmeeter
*@s2: parmetter
*@n: parmeter
*Return: 0 always NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	/*check strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*comput length*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	/*memory reserve*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy sec*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
