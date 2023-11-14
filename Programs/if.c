#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n ");

    scanf("%d", &age);

    printf("you have enter %d as your age\n", age);

    if (age < 18)
    {
        printf("you can vote!");
    }

    else if (age > 10)

    {
        printf("you are 19 year younger and your right is to give vote for kids ");
    }
    else
    {
        printf("you can not vote!");
    }
    return 0;
}

// it is used to parform operator based on some condition
// type of if statement

// 1>if statement
// 2> if eles statement
// 3>if eles if ladder
// 4>nested if
