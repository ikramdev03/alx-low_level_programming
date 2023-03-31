#include "main"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: the capitalizes string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (!(s[i] >= 'a' && s[i] <= 'z'))
		i++;

	if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
				|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || i == 0)
			i++;
			}
			return (s);
			}
