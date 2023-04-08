#include "main.h"

/**
 * _strlen_recurs - prints length of a string
 * @s: string to be displayed
 * Return: length of string
 *
 */

int _strlen_recurs(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recurs(s + 1));
	return (0);
}

/**
 * check_pal - check if s is palindrome
 * @s:string
 * @a: left index
 * @b: right index
 * Return: 1 if yes , 0 otherwiswe
 *
 */

int check_pal(char *s, int a, int b)
{
	if (s[a] == s[b])
		if (a > b / 2)
			return (1);
		else
			return (check_pal(s, a + 1, b - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if s is a palindrome
 * @s: string
 * Return: 1 success, 0 otherwise
 */

int is_palindrome(char *s)
{
	return  (check_pal(s, 0, _strlen_recurs(s) - 1));
}
