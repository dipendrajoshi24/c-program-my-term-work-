// write a c program to create a simple calculater program using a switch that performs addtion,subtraction,multiplication and division on user input:1
#include <stdio.h>

int main() {
    int a, b, c, ch;

    // Display menu
    printf("Press 1 for division\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for addtion\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    switch (ch) {
        case 1:
            c = a / b;
            printf("Division is %d\n", c);
            break;
        case 2:
            c = a - b;
            printf("Subtraction is %d\n", c);
            break;
        case 3:
            c = a * b;
            printf("Multiplication is %d\n", c);
            break;
        case 4:
            if (b != 0) {
                c = a + b;
                printf("Addtion is %d\n", c);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Wrong input\n");
            break;
    }
    
    printf("Thank you\n");
    return 0;
}
