#include<stdio.h>
int main()
{
    float celsius, Fahrenheit;
    scanf("%f",& Fahrenheit);
    celsius=(Fahrenheit-32)*5/9;
    printf("%.2f", celsius);
}