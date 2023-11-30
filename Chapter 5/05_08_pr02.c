#include <stdio.h>
float fahrenheit(int a);
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("The value of fahrenheit is %f\n", fahrenheit(a));
    return 0;
}
float fahrenheit(int a)
{
    float result;
    result = (float)((a * 9) / 5) + 32;
    return result;
}