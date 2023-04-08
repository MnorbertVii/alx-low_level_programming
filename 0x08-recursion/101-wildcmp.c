#include "main.h"

/**
 * string_checker - check if two strings are identical.
 * @s1: string_1
 * @s2: string_2
 * @i: index
 * @j: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int string_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (string_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (string_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (string_checker(s1, s2, i + 1, j) ||
				string_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: string.
 * @s2: string.
 *
 * Return: 1 if are equal
 */
int wildcmp(char *s1, char *s2)
{
	return (string_checker(s1, s2, 0, 0));
}
