#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

void exit_error(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void validate_input(const char* num1, const char* num2) {
    for (int i = 0; i < strlen(num1); i++) {
        if (!isdigit(num1[i])) {
            exit_error("Invalid input for num1");
        }
    }
    for (int i = 0; i < strlen(num2); i++) {
        if (!isdigit(num2[i])) {
            exit_error("Invalid input for num2");
        }
    }
}

int multiply_digits(int digit1, int digit2, int* carry) {
    int result = digit1 * digit2 + *carry;
    *carry = result / 10;
    return result % 10;
}

void multiply_numbers(const char* num1, const char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int buffer_len = len1 + len2;
    int* buffer = calloc(buffer_len, sizeof(int));
    if (!buffer) {
        exit_error("Failed to allocate memory");
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int index1 = i + j;
            int index2 = i + j + 1;
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = multiply_digits(digit1, digit2, &buffer[index1]);
            buffer[index2] += product;
        }
    }

    int leading_zeroes = 0;
    for (int i = 0; i < buffer_len; i++) {
        if (buffer[i] > 0 || i == buffer_len - 1) {
            leading_zeroes = i;
            break;
        }
    }

    for (int i = 0; i < buffer_len; i++) {
        result[i] = buffer[i + leading_zeroes] + '0';
    }
    result[buffer_len - leading_zeroes] = '\0';

    free(buffer);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        exit_error("Invalid number of arguments");
    }

    validate_input(argv[1], argv[2]);

    char result[BUFFER_SIZE];
    multiply_numbers(argv[1], argv[2], result);
    printf("%s\n", result);

    return 0;
}
