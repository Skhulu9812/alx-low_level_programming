#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    const char *str = "Programming is like building a multilingual puzzle\n";
    int length = 52; // Length of the string including the new line character

    puts(str);
    fprintf(stderr, "(%d chars long)\n", length);
    return 0;
}

