#include "main.h"
#include "stdio.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string to search
 * @needle: string to find
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
