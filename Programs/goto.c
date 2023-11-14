#include <stdio.h>

int main()
{
    // lable:
    //     printf("we are inside label");
    //     goto end;
    //     printf("johra\n");
    //     goto lable;
    // end:
    //     printf("we are at end");

    int num;
    for (int i = 0; i < 9; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 9; j++)
        {
            printf("enter  the number ,enter 0 to exit\n in ");
            scanf("%d", &num);
            if (num == 0)
            {

                // break;
                goto end;
            }
        }
    }
end:
    return 0;
}
