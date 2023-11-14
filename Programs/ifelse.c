#include <stdio.h>

int main()
{

    int score;
    printf("show your grade as your marks");
    scanf("%d", &score);
    if (score >= 85 && score <= 100)
    {
        printf("you got A grade in exam");
    }
    else if (score >= 80 && score < 90)
    {
        printf("you got B grade in your exam");
    }
    else if (score >= 70 && score < 80)
    {
        printf("you got C grade in your exam");
    }
    else if (score >= 60 && score < 70)
    {
        printf("you got D in your exam ");
    }
    else if (score >= 50 && score < 60)
    {
        printf("you got E in your exam");
    }
    else if (score >= 40 && score < 50)
    {
        printf("you got F grade in your r=exam");
    }
    else
    {
        printf("you are fall");
    }
    return 0;
}