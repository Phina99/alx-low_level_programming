#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes most of the words in a string.
 * @str: analized string.
 *
 * Return: string with all words capitalized.
 */
char *cap_string(char *str)
{
int i, j;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
i = 0;
while (*(str + i) != '\0')
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
if (i == 0)
{
*(str + i) = *(str + i) -32;
}
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == *(str + i - 1))
{
*(str + i) = *(str + i) -32;
}
}
}
}
i++;
}
return (str);
}
