#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a non-negative integer.");
    }

    printf("The prime factors are: ");

    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf(" %d", i);
            num = num / i;
        }
    }
}