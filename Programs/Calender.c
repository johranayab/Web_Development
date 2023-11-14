#include <stdio.h>
int main()
{

    int month;
    printf("Enter a month 1-12\n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("The Month is Jan\n");
        // break;
    case 2:
        printf("The Month is Feb\n");
        // break;
    case 3:
        printf("The Month is March\n");
        // break;
    case 4:
        printf("The Month is April\n");
        // break;
    case 5:
        printf("The Month is May\n");
        // break;
    case 6:
        printf("The Month is june\n");
        // break;
    case 7:
        printf("The Month is july\n");
        // break;
    case 8:
        printf("The Month is Aug\n");
        // break;
    case 9:
        printf("The Month is sep\n");
        // break;
    case 10:
        printf("The Month is oct\n");
        // break;
    case 11:
        printf("The Month is Nov\n");
        // break;
    case 12:
        printf("The Month is Dec\n");
        break;
    default:
        printf("You Have Enterd wrong Month");
        // break;
    }

    return 0;
}
  