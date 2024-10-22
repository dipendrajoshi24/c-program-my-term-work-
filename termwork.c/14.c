// write c program using for loop to print all even numbers between 1 to 50:
#include <stdio.h>

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
