#include <stdio.h>
/**
 *main - to print numbers of base 10 using putchar only
 *
 *Return: returns the value of 0
 */
int main(void)
{
int a;
for (a = 0; a < 10; a++)
putchar(a % 10 + '0');
putchar('\n');
return (0);
}
