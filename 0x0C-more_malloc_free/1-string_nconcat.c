#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate to s1
 *
 * Return: a pointer to the newly allocated memory containing the concatenated
 * strings, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int s1_len, s2_len, concat_len;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    if (n >= s2_len)
        n = s2_len;

    concat_len = s1_len + n + 1;
    concat = malloc(sizeof(char) * concat_len);
    if (concat == NULL)
        return NULL;

    strncpy(concat, s1, s1_len);
    strncpy(concat + s1_len, s2, n);
    concat[concat_len - 1] = '\0';

    return concat;
}
