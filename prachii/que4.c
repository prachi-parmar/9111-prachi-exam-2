#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

    case '%':
      
        if ((int)num2 != 0)
        {
            result = (int)num1 % (int)num2;

            printf("%d %% %d = %.0f\n", (int)num1, (int)num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed for modulus.\n");
        }
        break;

    default:
        printf("Error: Invalid operator.\n");
        break;
    }

}

