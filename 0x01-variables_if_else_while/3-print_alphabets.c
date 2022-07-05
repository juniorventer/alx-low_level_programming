#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
*/
int main(void)
{
ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar (10); /* this is an ascii code for new line*/

return (0);
}
