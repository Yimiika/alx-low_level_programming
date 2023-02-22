#include <stdio.h>

void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');
}
