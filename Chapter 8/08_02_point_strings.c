#include <stdio.h>

int main (){
    char str[]= "Naruto is the best anime";
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}