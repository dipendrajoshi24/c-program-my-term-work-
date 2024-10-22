#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Input from the user
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Calculator functionality using if-else statements
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else if (operator == '%') {
        if ((int)num2 != 0) {
            result = (int)num1 % (int)num2;
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator.\n");
    }

    return 0;
}