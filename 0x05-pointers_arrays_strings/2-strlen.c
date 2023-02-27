/**
 * _strlen - returns the length of a string
 * s: integer of function
 * count = count of string
 *
 * Return: The result of count
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count = count + 1;
s++;
}
return (count);
}
