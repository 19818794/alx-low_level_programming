#include "main.h"
int _str_len_rec(char *s);
int _palindrome(char *s, int pos);
/**
 * is_palindrome - check a string if it is a palindrome string or not
 * @s: the pointer to the string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _str_len_rec(s);

	return (_palindrome(s, len - 1));
}
/**
 * _str_len_rec - check lengh of a string
 * @s: string to be check
 *
 * Return: recursion
 */
int _str_len_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str_len_rec(++s));
}
/**
 * _palindrome - check palindrome
 * @s: the string to check
 * @pos: position
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int _palindrome(char *s, int pos)
{
	if (pos < 1)
		return (1);
	if (*s == *(s + pos))
		return (_palindrome(s + 1, pos - 2));
	return (0);
}
