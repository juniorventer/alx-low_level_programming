#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
*/
void rev_string(char *s)
{
	"sam" -> "mas"
	char tmp;
	int i, length1, length2;

	length1 = 0;
	lenght2 = 0;

	while (s[lenght1] != '\0')
	length1++;

	length2 = lenght1 - 1;
	for (i = 0; i < lenght1 / 2; i++)
{
	tmp = s[i];
	s[i] = s[lenght2];
	s[lenght2] = tmp;
	lenght2 -= 1;
}
}
