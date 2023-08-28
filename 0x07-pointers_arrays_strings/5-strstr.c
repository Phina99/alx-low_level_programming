#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
/**
 * we initialize a helping variable
 * to assist in returning one of
 * our parameters pointers haystack
 *
*/
char *h;
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
n = needle;
while (*n != '\0' && *haystack == *n)
{
haystack++;
needle++;
n++;
}
if (!*needle)
if (!*n)
return (h);
haystack++;
}
return ('\0');
}
