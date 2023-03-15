#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * argc - This is the command
 * argv - This is the array of commands
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i, multiplication;

multiplication = 1;
if(argc < 3 )
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
multiplication = multiplication * atoi(argv[index]);
}
printf("%d\n", multiplication);
return (0);
}
