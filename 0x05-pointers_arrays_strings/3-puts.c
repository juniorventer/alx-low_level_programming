#include "main.h"

/**
 * _puts -> this is the function that puts
 *@str: a param to _puts function
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
{
	putchar(*str);
}
	putchar('\n');
}
