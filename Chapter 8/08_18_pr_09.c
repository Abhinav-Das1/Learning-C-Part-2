#include <stdio.h>

int Present(char str[], char c)
{
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            return 1; // Character is present
        }
        ptr++;
    }

    return 0; // Character is not present
}

int main()
{
    char str[] = "Hello, World!";
    char searchChar = 'o';

    if (Present(str, searchChar))
    {
        printf("The character '%c' is present in the string.\n", searchChar);
    }
    else
    {
        printf("The character '%c' is not present in the string.\n", searchChar);
    }

    return 0;
}
