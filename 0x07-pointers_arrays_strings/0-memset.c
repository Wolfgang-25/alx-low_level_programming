#include "main.h"

/**
 * _memset - function that fills a memory space with a specified value
 * @s: pointer with the memory address
 * @b: specified value
 * @n: number bytes for change
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
