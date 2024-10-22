// write a c program that uses a for loop to check if a given number is palindrome(reads the same forward and backward)
#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num; 
    
    for ( ; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }
    
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
    
    return 0;
}
