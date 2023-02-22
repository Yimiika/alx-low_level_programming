#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
    int hours, minutes;

    for (hours = 0; hours < 24; hours++)
    {
        for (minutes = 0; minutes < 60; minutes++)
        {
            putchar((hours / 10) + '0');
            putchar((hours % 10) + '0');
            putchar(':');
            putchar((minutes / 10) + '0');
            putchar((minutes % 10) + '0');
            putchar('\n');
        }
    }
}
