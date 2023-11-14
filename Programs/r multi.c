#include<stdio.h>
int main()
{
int i,num;
printf("enter the number you want to multiplication ");
scanf("%d",&num); 
printf("here 10 tabel is ");
for ( i = 0; i < 10; i++)
{
    printf("%dX%d=%d\n",i,num, i*num);
}

    return 0;
}