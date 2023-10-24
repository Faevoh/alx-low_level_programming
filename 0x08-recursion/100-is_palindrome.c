#include "main.h"

int palindrome(char *s, int i, int length);
int _string_length(char *s);

/**
  *is_palindrome - checks if string is a palindrome
  *@s: string variable
  *Return: returns 1 is string is palindrome
  * and 0 if it's not
  */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _string_length(s)));
}

/**
  *_string_length - checks length of a string
  *@s: string variable
  *Return: returns length of string
  */

int _string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _string_length(s + 1));
}

/**
  *palindrome - check for palindrome
  *@s: string variable
  *@i: integer variable
  *@length: integer variable 2
  *Return: returns 1
  */

int palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (palindrome(s, i + 1, length - 1));
}

