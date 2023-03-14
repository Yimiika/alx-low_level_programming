#include <stdio.h>

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string literal
 * @accept: second string
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j, counter;

        counter = 0;
        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (accept[j] == s[i])
                        {
                                counter++;
                                break;
                        }
                }
                if (accept[j] != s[i])
                {
                break;
                }
        }
        return (counter);
}
