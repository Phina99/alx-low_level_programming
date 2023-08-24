#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str:the string
 *
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters1[j])
			{
				str[i] = letters2[j];
				break;
			}
		}
	}
	return (str);
}
