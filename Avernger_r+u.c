#include <stdio.h>

int main() {
    int input;

    printf("Enter a number (1, 2, 3, 4, 5, 6): ");
    scanf("%d", &input);

    switch (input) {
        case 1:
            printf("Output: Seven\n");
            break;
        case 2:
            printf("Output: Sixty-Nine\n");
            break;
        case 3:
            printf("Output: Five\n");
            break;
        case 4:
            printf("Output: Zero Two Three\n");
            break;
        case 5:
            printf("Output: Invalid input. Please enter a valid number (1, 2, 3, 4, 6).\n");
            break;
        case 6:
            printf("Output: Nine Eight Seven Four\n");
            break;
        default:
            printf("Invalid input. Please enter a valid number (1, 2, 3, 4, 5, 6).\n");
            break;
    }

    return 0;
}
