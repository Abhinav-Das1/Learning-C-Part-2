#include <stdio.h>
#include <string.h>

int main (){
    char *str = "This";
    char str2[40];
    strcpy(str2, str);
    printf("Now the str2 is %s", str2);
    return 0;
}