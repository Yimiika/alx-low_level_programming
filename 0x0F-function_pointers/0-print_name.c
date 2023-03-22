#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to a string containing the name
 * @f: function pointer that takes a char * argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}

/**
 * print_with_hello - prints a greeting with the name
 * @name: pointer to a string containing the name
 */
void print_with_hello(char *name)
{
    printf("Hello, %s!\n", name);
}

/**
 * main - entry point of the program
 * Return: 0 on success
 */
int main(void)
{
    char name[] = "Alice";
    print_name(name, print_with_hello); /* Output: Hello, Alice! */
    return 0;
}
