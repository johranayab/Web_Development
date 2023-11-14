#include <stdio.h>
int main()
{

    int age, mark;
    printf("enter  your age ");
    scanf("%d", &age);

    printf("enter your mark");
    scanf("%d", &mark);
    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        break;
    case 13:
        printf("the age is 13\n");
        break;
    case 32:
        printf("the age is 32\n");
        switch (mark)
       { case 55:
            printf("your mark is 55");
            break;
    default:
        printf("your mark is not 55");
       }
       
    default:
        printf("age is not 3 13 0r 32");
        return 0;
    }
}