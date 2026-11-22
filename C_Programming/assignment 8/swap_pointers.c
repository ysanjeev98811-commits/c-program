#include <stdio.h>

int main() {
    int num1, num2, temp;
    int *p1, *p2;  // Declare two pointers

    // Ask the user for two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Store the memory addresses of num1 and num2 in pointers
    p1 = &num1;
    p2 = &num2;

    printf("\nBefore Swapping:\n");
    printf("First number=%d, Second number=%d\n\n", num1, num2);

    // Swap the values using pointers (* means "value at address")
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    

    printf("After Swapping:\n");
    printf("First number=%d, Second number=%d\n\n\n", num1, num2);

    return 0;
}
