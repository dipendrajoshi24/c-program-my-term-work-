//write a c program to convert a temperature from celsius to fahrenheit
#include<stdio.h>
int main(){
    float celsius,fahrenheit;

    printf("Enter temerature in celsius:");
    scanf("%f",&celsius);

     fahrenheit=(celsius *9/5)+32;

     printf("Temperature in fahrenheit: %.2f\n",fahrenheit);

    return 0;
}