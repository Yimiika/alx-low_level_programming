#include <stdio.h>

void _puts(char *str)
{
    int i = 0;
   while(*str[i])  
    {
        if( putchar(*str[i]) == EOF) 
        { 
            return EOF;
        }
        i++;
    }
   if(putchar('\n') == EOF) 
   {
       return EOF;
   }
   return 1;
}
