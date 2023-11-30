#include <stdio.h>

int occurrence(char str[], char c)
{
    char *ptr = str;
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }

    return count;
}

int main()
{
    char str[] = "Abhinav";
    int count = occurrence(str, 'a');
    printf("Occurrences = %d\n", count);

    return 0;
}