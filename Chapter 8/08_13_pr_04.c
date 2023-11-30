#include <stdio.h>
void slice(char *str, int m, int n){
    int i = 0;
    while((m+i)<n){
        str[i] = str[i+m];
        i++;
    }
    str[i] = '\0';
}
int main (){
    char str[] = "Abhinav";
    slice(str, 1, 6);
    printf("%s", str);
    return 0;
}