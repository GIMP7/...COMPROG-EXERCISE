#include <stdio.h>

int main() {
    int N1, N2, M, count;

    printf("Enter the starting number (N1): ");
    scanf("%d", &N1);
    printf("Enter the ending number (N2): ");
    scanf("%d", &N2);
    printf("Enter the divisor (M): ");
    scanf("%d", &M);
    
    printf("Numbers are divisible by %d between %d and %d are: ", M, N1, N2);
    
    for (int i = N1; i <= N2; i++) {
        if (i % M == 0) {
            printf("%d ", i);
            count++;
        }
    }
   
    printf("\nTotal count of numbers divisible by %d: %d\n", M, count);

}