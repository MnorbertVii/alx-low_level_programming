#include "main.h"

/**
 * _isalpha - checks for character which is alphabet
 * @c: character to be checked
 *
 * Return: 1 if yes and 0 otherwise
 *
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
