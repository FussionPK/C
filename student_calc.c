#include <stdio.h>
#include <string.h> 
#include <ctype.h>  
#include <stdlib.h> 

// Function to check if a string contains only letters, spaces, hyphens, or apostrophes
int isValidText(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i]) && str[i] != ' ' && str[i] != '-' && str[i] != '\'') {
            return 0; // Invalid character found
        }
    }
    return 1; // All characters are valid
}

// Function to check if a string contains only digits
int isValidNumber(const char *str) {
    if (str[0] == '\0') return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0; // Non-digit found
        }
    }
    return 1; // All characters are digits
}

int main() {
    // Variables for user input
    char studentName[50];
    char firstNumInput[15];  // Temporary string for first integer
    char secondNumInput[15]; // Temporary string for second integer
    int firstNum, secondNum;

    // --- Collect and Validate Student Details
    // 1. Full Name
    do {
        printf("Enter your full name: ");
        fgets(studentName, sizeof(studentName), stdin);
        studentName[strcspn(studentName, "\n")] = 0; // Remove newline
        if (!isValidText(studentName)) {
            printf("Error: Name must not contain numbers or special characters.\n");
        }
    } while (!isValidText(studentName));

    // 2. First Integer
    do {
        printf("Enter first integer: ");
        fgets(firstNumInput, sizeof(firstNumInput), stdin);
        firstNumInput[strcspn(firstNumInput, "\n")] = 0; // Remove newline
        if (!isValidNumber(firstNumInput)) {
            printf("Error: Input must contain only digits.\n");
        } else {
            firstNum = atoi(firstNumInput); // Convert to integer
        }
    } while (!isValidNumber(firstNumInput));

    // 3. Second Integer
    do {
        printf("Enter second integer: ");
        fgets(secondNumInput, sizeof(secondNumInput), stdin);
        secondNumInput[strcspn(secondNumInput, "\n")] = 0; // Remove newline
        if (!isValidNumber(secondNumInput)) {
            printf("Error: Input must contain only digits.\n");
        } else {
            secondNum = atoi(secondNumInput); // Convert to integer
        }
    } while (!isValidNumber(secondNumInput)); 

    // Display Calculation Results
    printf("\n=== Calculation Results ===\n");

    // Addition
    printf("%s has entered %d and %d. %d + %d equals %d.\n", 
           studentName, firstNum, secondNum, firstNum, secondNum, firstNum + secondNum);

    // Subtraction
    printf("%s has entered %d and %d. %d - %d equals %d.\n", 
           studentName, firstNum, secondNum, firstNum, secondNum, firstNum - secondNum);

    // Multiplication
    printf("%s has entered %d and %d. %d * %d equals %d.\n", 
           studentName, firstNum, secondNum, firstNum, secondNum, firstNum * secondNum);

    // Division with zero check
    if (secondNum != 0) {
        printf("%s has entered %d and %d. %d / %d equals %.2f.\n", 
               studentName, firstNum, secondNum, firstNum, secondNum, (float)firstNum / secondNum);
    } else {
        printf("%s has entered %d and %d. Cannot divide by zero!\n", 
               studentName, firstNum, secondNum);
    }

    return 0;

}
