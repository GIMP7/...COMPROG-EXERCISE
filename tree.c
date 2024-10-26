#include <stdio.h>

int main() {
    
    int days_due, fine;
    char type;

    printf("Enter the number of days overdue: ");
    scanf("%d", &days_due);
    printf("Enter the type of rental(C for CD, V for VHS): ");
    scanf(" %c", &type);

    if (days_due <= 0) {
        fine = 0;
    } else if (days_due <= 2 ) {
        fine = 5;
    } else if (days_due <= 4) {
        fine = 10;
    } else if (days_due <= 6) {
        fine = 15;
    } else {
        if (type == 'C' || type == 'c') {
            fine = 20;
        } else if (type == 'V' || type == 'v') {
            fine = 40;
        } else {
            printf("Invalid type of rental.\n");
        }
    }

    if (fine == 0.0) {
        printf("No fine.\n");
    } else {
        printf("The fine is: %d php\n", fine);
    }
}