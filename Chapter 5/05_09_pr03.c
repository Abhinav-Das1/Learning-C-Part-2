#include <stdio.h>
float force(float mass);

int main()
{
    float m;
    printf("Enter the value of mass in kgs\n");
    scanf("%f", &m);
    printf("The value of force in newton is %.2f\n", force(m));
    return 0;
}
float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}