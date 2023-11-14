 #include <stdio.h>
 int main()
 { 
   int age;
   printf("enter your agr\n");
   scanf("%d",&age);

if (age>=18)
{
   printf("you can vote");
}
else if ( age <10)
{
   printf(" you are kid");
}
else{
   printf("you can not vote ");

}

    return 0;
 }