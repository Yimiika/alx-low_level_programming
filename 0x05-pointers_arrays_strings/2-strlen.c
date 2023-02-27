/**
 * int _strlen - returns the length of a string
 * *s: address of function
 *count = count of string
 *
 * 
 */
int _strlen(char *s)
{
int count = 0;
while(*s!='\0')
{
count = count +1;
s++;
}
return count;
}
