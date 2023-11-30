#include <stdio.h>
void printAdd(int a);
int main (){
    int i=5;
    printf("The value of i is %d\n", i);
    printAdd(i);
    printf("The address variable of i is %u\n", &i);
    return 0;
}
void printAdd(int a){
    printf("The address of variable a is %u\n", &a);
}