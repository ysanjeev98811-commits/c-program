#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Addition = %d\n", num1 + num2);
                break;

            case 2:
                printf("Subtraction = %d\n", num1 - num2);
                break;

            case 3:
                printf("Multiplication = %d\n", num1 * num2);
                break;

            case 4:
                if (num2 != 0)
                    printf("Division = %.2f\n", (float)num1 / num2);
                else
                    printf("Division by zero is not possible.\n");
                break;

            case 5:
                if (num2 != 0)
                    printf("Modulus = %d\n", num1 % num2);
                else
                    printf("Modulus by zero is not possible.\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}