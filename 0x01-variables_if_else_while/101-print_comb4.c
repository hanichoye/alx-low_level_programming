#include <stdio.h>
#include <stdlib.h>

/**
 * main - print possible combo of 3.
 * Return: returns zero at the end
 */
int main(void)
{
int i;
int p;
int m = 0;

while (m < 10)
{
p = 0;
while (p < 10)
{
i = 0;
while (i = 10)
{
if (i != p && p != m && m < p && p < i)
{
putchar(m + '0');
putchar(p + '0');
putchar(i + '0');

if (i + p + m != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
i++;
}
p++;
}
m++;
}
putchar('\n');
return (0);
}
