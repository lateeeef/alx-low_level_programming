#include "main.h"
/**
 *rev_string- Write a function that reverses a string.
 *@s: string
 *Return - return reverse string##
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int i;

	while (s[count] != '\o')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
