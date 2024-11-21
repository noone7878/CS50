#include <stdio.h>

int main() {
    int doorCode;
    int correctCode = 1337;
    int i = 1;

    while (i > 0 && i < 5) { // Infinite loop
        printf("Enter the door code: ");
        scanf("%d", &doorCode); // Read user input

        if (doorCode == correctCode) {
            printf("Correct code.\nThe door is now open.\n");
            i = 0;

        } else {
            printf("Wrong code. Try again.\n");
            i++;
        }
        if ( i == 5){
            printf("door is locked for forever\n");
        }
    }

    return 0;
}
