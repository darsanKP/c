#include <stdio.h>
#include <ctype.h>  // For isupper() and islower() functions

int main() {
    char str[100];
    int upperCase = 0, lowerCase = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to safely read the string

    printf("size %ld\n", sizeof(str));
    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is uppercase
        if (isupper(str[i])) {
            upperCase++;
        }
        // Check if the character is lowercase
        else if (islower(str[i])) {
            lowerCase++;
        }
    }

    // Output the result
    printf("Uppercase letters: %d\n", upperCase);
    printf("Lowercase letters: %d\n", lowerCase);

    return 0;
}

