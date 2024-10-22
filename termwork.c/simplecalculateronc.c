#include<stdio.h>
void main(){
    char s1;
    int n1, n2;
    float r;  

    printf("Enter any two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("If you want to add, press '+'\n");
    printf("If you want to subtract, press '-'\n");
    printf("If you want to multiply, press '*'\n");
    printf("If you want to divide, press '/'\n");

    scanf(" %c", &s1);

    switch(s1) {
        case '+': 
            r = n1 + n2;
            printf("Output is %.2f\n", r);  
            break;
        case '-': 
            r = n1 - n2;
            printf("Output is %.2f\n", r);
            break;
        case '*': 
            r = n1 * n2;
            printf("Output is %.2f\n", r);
            break;
        case '/': 
            if(n2 != 0) {
                r = (float)n1 / n2;  
                printf("Output is %.2f\n", r);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default: 
            printf("Invalid option\n");
            break;
    }
}
