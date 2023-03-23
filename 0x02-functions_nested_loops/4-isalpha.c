#include "main.h"
/**
 * _isalpha - checks for an alphabetic char
 * @c: character to be checked
 * Return: 1 if yes, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
