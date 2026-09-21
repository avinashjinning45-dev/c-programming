#include <stdio.h>

int main()
{
    float a, b;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (operator == '+')
    {
        printf("Result = %.2f", a + b);
    }
    else if (operator == '-')
    {
        printf("Result = %.2f", a - b);
    }
    else if (operator == '*')
    {
        printf("Result = %.2f", a * b);
    }
    else if (operator == '/')
    {
        if (b != 0)
            printf("Result = %.2f", a / b);
        else
            printf("Cannot divide by zero");
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}