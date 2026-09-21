#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive number");
    }
    else if (number < 0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}