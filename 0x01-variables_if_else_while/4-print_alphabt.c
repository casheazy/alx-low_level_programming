#include <stdio.h>

/**
 *main - function to print all lowercase letters of alphabet except e and q
 *
 *Return: returns value of 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; ++a)
if (a != 'e' && a != 'q')
putchar (a);
putchar ('\n');
return (0);
}
