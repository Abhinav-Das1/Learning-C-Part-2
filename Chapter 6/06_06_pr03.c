#include <stdio.h>
void MultiplyByTen(int *num){
    *num = *num * 10;
}
int main (){
    int number = 10;
    printf("The value before multiplication is %d\n", number);
    MultiplyByTen(&number);
    printf("The value after multiplication is %d\n", number);
    return 0;
}