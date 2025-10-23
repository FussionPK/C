/*
 StudentInfo - C Program 1
 Name: Ryan Charkuoth Noah
 Student ID: M01064288
*/

/*
Write a C program that displays your name, student ID, Degree Programme and why
you are studying that programme.
The program should also perform 4 calculations using the numbers in your student ID
(+, -, /, and *).
Include some relevant comments in your code.
*/

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
    char studentIdInput[15]; // Temporary string to validate numeric input
    int studentId; // Store student ID as integer
    char program[50];
    char motivation[100]; // Larger size for longer motivation text

    // --- Collect and Validate Student Details
    // 1. Full Name
    do {
        printf("Enter your full name (letters, spaces, hyphens, or apostrophes only): ");
        fgets(studentName, sizeof(studentName), stdin);
        studentName[strcspn(studentName, "\n")] = 0; // Remove newline
        if (!isValidText(studentName)) {
            printf("Error: Name must not contain numbers or special characters (except hyphens/apostrophes).\n");
        }
    } while (!isValidText(studentName)); 

    // 2. Student ID (numeric only)
    do {
        printf("Enter your student ID number: ");
        fgets(studentIdInput, sizeof(studentIdInput), stdin);
        studentIdInput[strcspn(studentIdInput, "\n")] = 0; // Remove newline
        if (!isValidNumber(studentIdInput)) {
            printf("Error: Student ID must contain only digits (e.g., 123456, not M4 or 4.5).\n");
        } else {
            studentId = atoi(studentIdInput); // Convert to integer
            if (studentId <= 0) {
                printf("Error: Student ID must be a positive number.\n");
            }
        }
    } while (!isValidNumber(studentIdInput) || studentId <= 0);

    // 3. Degree Program
    do {
        printf("Enter your degree program (letters, spaces, hyphens, or apostrophes only): ");
        fgets(program, sizeof(program), stdin);
        program[strcspn(program, "\n")] = 0;
        if (!isValidText(program)) {
            printf("Error: Program must not contain numbers or special characters (except hyphens/apostrophes).\n");
        }
    } while (!isValidText(program)); 

    // 4. Motivation
    do {
        printf("Why are you pursuing this degree? (letters, spaces, hyphens, or apostrophes only): ");
        fgets(motivation, sizeof(motivation), stdin);
        motivation[strcspn(motivation, "\n")] = 0;
        if (!isValidText(motivation)) {
            printf("Error: Motivation must not contain numbers or special characters (except hyphens/apostrophes).\n");
        }
    } while (!isValidText(motivation)); 

    // Display Student Details
    printf("\n=== Student Details ===\n");
    printf("Full Name: %s\n", studentName);
    printf("Student ID: M%d\n", studentId); // Manually Added an M to reduce complexity
    printf("Program: %s\n", program);
    printf("Motivation: %s\n\n", motivation);

    // Student ID Digit Operations
    // Using sample digits from student ID (e.g., 10, 64, 288)
    int firstDigit = 10; 
    int secondDigit = 64; 
    int thirdDigit = 288; 

    printf("=== ID Digit Calculations ===\n");

    // Addition
    printf("Sum: %d + %d = %d\n", firstDigit, secondDigit, firstDigit + secondDigit);

    // Subtraction
    printf("Difference: %d - %d = %d\n", secondDigit, firstDigit, secondDigit - firstDigit);

    // Multiplication (Using long long to handle large products)
    long long product = (long long)secondDigit * thirdDigit;
    printf("Product: %d * %d = %lld\n", secondDigit, thirdDigit, product);

    // Division (Floating-point division)
    if (firstDigit != 0) {
        printf("Quotient: %d / %d = %.2f\n", secondDigit, firstDigit, (float)secondDigit / firstDigit);
    } else {
        printf("Quotient: Cannot divide by zero.\n");
    }

    return 0;
}