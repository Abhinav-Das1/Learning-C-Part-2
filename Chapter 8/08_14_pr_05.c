#include <stdio.h>
int strcpy(char *str, char *scr)
{
    char *ptr = str;
    char *n_ptr = scr;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        scr++;
        ptr++;
    }
    *ptr = '\0';
    return len;
}
int main()
{
    char str[] = "Abhinav";
    char str2[40];
    int l = strcpy(str2, str);
    printf("Now the str2 is %s\n", str2);
    printf("The length of str2 is %d\n", l);
    return 0;
}