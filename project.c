#include <stdio.h>

int main()
{
    int choice;
    int a, b, result;

    do
    {
        printf("\n--- Bitwise Utility Tool ---\n");
        printf("1. AND (&)\n");
        printf("2. OR (|)\n");
        printf("3. XOR (^)\n");
        printf("4. Left Shift (<<)\n");
        printf("5. Right Shift (>>)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter first integer: ");
            scanf("%d", &a);

            printf("Enter second integer: ");
            scanf("%d", &b);
        }

        switch (choice)
        {
            case 1:
                result = a & b;
                printf("Result of AND operation: %d\n", result);
                break;

            case 2:
                result = a | b;
                printf("Result of OR operation: %d\n", result);
                break;

            case 3:
                result = a ^ b;
                printf("Result of XOR operation: %d\n", result);
                break;

            case 4:
                result = a << b;
                printf("Result of Left Shift: %d\n", result);
                break;

            case 5:
                result = a >> b;
                printf("Result of Right Shift: %d\n", result);
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}