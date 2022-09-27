#include "main.h"
/**
* _strchr - locates a character in a string
* @s: strings given
* @c: the character to be located.
* Return: if c is found - a pointer to the first occurence
* if c is not found then NULL
*
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
			return (s);
	}
	return ('\0');
}
