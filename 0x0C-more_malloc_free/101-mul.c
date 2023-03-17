#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * exit_error - function that exits the program with an error message
 * @message: the error message to print
 *
 * Return: void
 */
void exit_error(char *message)
{
    printf("Error: %s\n", message);
    exit(98);
}

/**
 * validate_input - function that validates if the input is composed only of digits
 * @num1: first number to validate
 * @num2: second number to validate
 *
 * Return: void
 */
void validate_input(char *num1, char *num2)
{
    int i;
    for (i = 0; num1[i] != '\0'; i++)
    {
        if (!isdigit(num1[i]))
        {
            exit_error("Invalid input for num1");
        }
    }
    for (i = 0; num2[i] != '\0'; i++)
    {
        if (!isdigit(num2[i]))
        {
            exit_error("Invalid input for num2");
        }
    }
}

/**
 * multiply_numbers - function that multiplies two numbers passed as strings
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: a string with the result of the multiplication
 */
char *multiply_numbers(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int i, j, k;

    char *result = calloc(len1 + len2 + 1, sizeof(char)); /* allocate memory for the result */
    if (!result)
    {
        exit_error("Memory allocation error");
    }

    /* multiply the numbers digit by digit and store the result in the result string */
    for (i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
        {
            int prod = (num1[i] - '0') * (num2[j] - '0') + carry + (result[k] - '0');
            result[k] = (prod % 10) + '0';
            carry = prod / 10;
        }
        result[k] = carry + '0';
    }

    /* remove leading zeros from the result string */
    while (*result == '0' && *(result + 1) != '\0')
    {
        result++;
    }

    return result;
}

/**
 * main - function that multiplies two numbers passed as arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
    char *num1, *num2, *result;

    /* check if the correct number of arguments are passed */
    if (argc != 3)
    {
        exit_error("Invalid number of arguments");
    }

    num1 = argv[1];
    num2 = argv[2];

    validate_input(num1, num2);

    result = multiply_numbers(num1, num2);

    printf("%s\n", result);

    free(result); /* free the memory allocated for the result */

    return 0;
}
