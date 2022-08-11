#include "main.h"
#include "unistd.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: On Success 1'
 * On error, -1
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: number of chars
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
