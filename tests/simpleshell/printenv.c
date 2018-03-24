#include "holberton.h"
/**
 * _strlen - finds length of string
 * @string: input string
 * Return: int length, or 0 on error/empty
 */
int _strlen(char *string)
{
	int count;

	if (string == NULL)
	{
		return (0);
	}

	count = 0;
	while (string != NULL)
	{
		count++;
		string++;
	}
	count++;
	return (count);
}

/**
 * _strcmp_env - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s1 - s2 or 0
 */

int _strcmp_env(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/**
* printenviron - prints environment
* @argv: input variable
* Return 1 if success or 0 if fails
**/

int printenviron(void)
{
	extern char **environ;
//	char env[] = "env";
	int i = 0;
	int j = 0;

//	if (_strcmp_env(argv[0], env) == 0)
//	{
		while(environ[i] != NULL)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
			i++;
			/* printf("%s\n", environ[i++]); */
		}
		return (1);
/*	}
	else
	return (0); */
}

void main(void)
{
	printenviron();
}
