#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 35)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}