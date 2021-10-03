#include <stdio.h>
/**
 *main - prints letters of aplhabet in reverse order
 *
 *Return: returns value of 0
 */
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
putchar(a);
putchar('\n');
return (0);
}
