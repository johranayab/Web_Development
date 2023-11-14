#include <stdio.h>

int main()
{

    int age, marks;
    printf("write you age");
    scanf("%d", &age);

    printf("write you marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks is 45");

            break;

        default:
            printf("your marks is not 45");
            break;
        }

    case 13:
        printf("the age is 13\n");

        break;

    case 23:

        printf("the age is 23\n");
        break;

    default:

        printf("age is not 3,13 or 23");

        break;
    }

    return 0;
}


