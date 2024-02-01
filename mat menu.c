#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("*****************\n");
    printf("******MENU*******\n");
    printf("*****************\n\n");

    printf("1=Sum\n");
    printf("2=Subtraction\n");
    printf("3=Multiplication\n");
    printf("4=Division\n");
    printf("5=Square\n");
    printf("6=Cube\n\n");

    int num, num1, num2, result;
    float result1;

    printf("Choose your option from the menu: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Please enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case 2:
            printf("Please enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case 3:
            printf("Please enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case 4:
            printf("Please enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            if (num2 != 0) {
                result1 = (float)num1 / num2;
                printf("Result: %f\n", result1);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 5:
            printf("Please enter a number: ");
            scanf("%d", &num1);
            result = num1 * num1;
            printf("Result: %d\n", result);
            break;
        case 6:
            printf("Please enter a number: ");
            scanf("%d", &num1);
            result = num1 * num1 * num1;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid option\n");
            break;
    }

    return 0;
}
