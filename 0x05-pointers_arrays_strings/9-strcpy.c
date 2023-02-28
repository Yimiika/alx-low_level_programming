#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src!='\0') 
 {
*dest++ = *src++;
}
return temp;
}
