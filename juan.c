#include <stdio.h>
#include <conio.h>

int main() {
    int height, age, citizenship, recommendee;

    printf("Enter your height (in cm): ");
    scanf("%d", &height);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your citizenship (1 for citizen, 0 for non-citizen): ");
    scanf("%d", &citizenship);
    printf("Enter your recommendee code (1 for recommended, 0 for not recommended): ");
    scanf("%d", &recommendee);

 
    if (height >= 200 && age >= 21 && age <= 25 && citizenship == 1 && recommendee == 1) {
        printf("\nCongratulations! You have been accepted to the Jedi Knight Academy!\n");
    } else {
        printf("\nSorry, you are not qualified for the Jedi Knight Academy.\n");
    }
    return 0;
}