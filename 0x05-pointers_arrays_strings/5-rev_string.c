#include "main.h"
#include <stdio.h>

/**
 * rev_str - revers the string
 * @s: string input
 * Return: nothing
 */

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find the string length */
	for (l = 0; s[l] != '\0'; ++1)
		;
	/*swap the srting by looping*/
	for (i = 0; i < l  / 2; i++)
	{
		temp = s[i];
		s[i] = s[1 - 1 - i]; /*1 b the arry starts wuth 0*/
		s[l - 1 - i] = temp;
	}
}
