#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
