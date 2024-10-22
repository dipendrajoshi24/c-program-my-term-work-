//write  c program that uses a loop to print all number from 1 to 10 but skip number 5 using the continue statement
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; 
        }
        printf("%d ", i);
    }
    return 0;
}
