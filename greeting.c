#include <stdio.h>
#include <stdlib.h>  // For malloc
#include <string.h>  // For strlen

// Function to get a string input from the user
char* get_string(const char* prompt) {
    printf("%s", prompt);  // Print the prompt

    char buffer[256];  // Temporary buffer for input
    fgets(buffer, sizeof(buffer), stdin);  // Read input

    // Remove the newline character from the input
    buffer[strcspn(buffer, "\n")] = '\0';

    // Allocate memory for the string and copy the input
    char* input = malloc(strlen(buffer) + 1);
    if (input == NULL) {
        return NULL;  // Handle memory allocation failure
    }
    strcpy(input, buffer);

    return input;
}

int main(void) {
    char* first = get_string("What is your first name? ");
    char* last = get_string("what is your last name? ");
    printf("Hello, %s %s!\n", first, last);

    free(first);
    free(last);  // Free allocated memory
    return 0;
}