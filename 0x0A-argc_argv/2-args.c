#include <stdio.h>

/**
 * main - program that prints all the arguments
 * argc - This is the command
 * argv - This is the array of commands
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}
