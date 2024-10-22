// write c program to find sum of natural number
#include<stdio.h>
int main(){
    int n, sum=0;

    printf("Enter a postive integer:");
    scanf("%d",&n);

    for(int i=1; i <=n; ++i){
        sum += i;
    }

    printf("The sum of the first %d natural number is: %d\n",n,sum);

    return 0;
}  