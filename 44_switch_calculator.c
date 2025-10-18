#include <stdio.h>
int main()
{
    int choice;
    double num1, num2, result;
    printf("Simple Calculator Menu:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case 5:
        if ((int)num2 != 0)
        {
            int modResult = (int)num1 % (int)num2;
            printf("%d %% %d = %d\n", (int)num1, (int)num2, modResult);
        }
        else
        {
            printf("Error: Modulus by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid choice! Please select a valid operation (1-4).\n");
        break;
    }
}