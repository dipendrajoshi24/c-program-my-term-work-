//write a c program to find the sum and average of three number
#include<stdio.h>
int main(){
    float num1,num2,num3,sum,average;

    printf("Enter three number:");
    scanf("%f %f %f",&num1,&num2,&num3);

    sum=num1+num2+num3;
    average=sum/3;

    printf("Sum:%.2f",sum);
    printf("\nAverage:%.2f",average);

    return 0;
}
