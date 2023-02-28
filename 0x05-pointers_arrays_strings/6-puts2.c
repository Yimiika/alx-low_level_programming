#include <stdio.h>
#include <string.h>

void puts2(char *str)
{
int i;
for(i = 0; i < strlen(str); i+=2){
putchar(str[i]);
str[i/2]=str[i];
}
}
