
#include <stdio.h>
int main()
{

    int num, index = 0;
    printf("enter a number\n");
    scanf("%d", &num);

    // do
    // {
    //     printf("%d\n", index + 1);
    //     index = index + 1;

    // } while (index < num);


    int i =0;

    do{
        printf("%d X %d = %d\n" , num , i , num*i);
        i++;
    }while(i <=10);
    
    
    return 0;
    printf("Daniah");
}
