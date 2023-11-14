#include <stdio.h>

int main()
{
    int math, science;
    printf("enter your math marks");
    scanf("%d", &math);
    printf("enter your science marks ");
    scanf("%d", &science);

    if (math >= 45 && science >= 45)
    {
        printf("you got 45rs gift as you passed in both math and sci ");
    }
    else if (math >= 45 || science >= 45)
    {
        printf("you got 15rs gift as you passed in math or science\n");
        if (math >= 45)
        {
            printf("You have passed in Math");
        }
        else
        {
            printf("You have passed in Science");
        }
    }
    else
    {
        printf(" you are falled ");
    }
    return 0;
}

/*math and science -45
science -15
math-15
print the type of gift
you are giving to them
 */
// 131595 