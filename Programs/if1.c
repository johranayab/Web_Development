#include <stdio.h>
int main()
{
    int a;
    printf("Enter either 0 or 1 ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("your num is 1");
    }
    else
    {
        if (a == 0)
        {
            printf("your num is 0");
        }
        else
        {
            printf("Wrong Input");
        }
    }
    return 0;
}

