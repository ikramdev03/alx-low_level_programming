#include "main"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 * Return: the capitalizes string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;

	if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
				|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || i == 0)
			i++;
			}
			return (s);
			}
