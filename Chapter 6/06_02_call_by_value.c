#include <stdio.h>
int sum(int a, int b);

int main (){
    int a = 5, b = 5;
    printf("The value of a and b is %d\n", sum(a,b));
    return 0;
}
int sum(int a, int b){
    return a + b;
}