#include <stdio.h>

// Function to generate Fibonacci sequence up to n terms
void generateFibonacci(int n) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }

        printf("%d ", nextTerm);
    }
}

// Main function
int main() {
    int numTerms;

    // Get user input for the number of terms
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &numTerms);

    // Check if the input is valid
    if (numTerms <= 0) {
        printf("Please enter a positive integer for the number of terms.\n");
        return 1; // Exit with an error code
    }

    // Call the function to generate and print the Fibonacci sequence
    generateFibonacci(numTerms);

    return 0; // Exit successfully
}
