#include <stdio.h>

int main (){
    int a=69;
    int *s = &a;
    printf("The value of a is %d\n", *s);
    printf("The adress of variable a is %u\n", &a);
    return 0;
}