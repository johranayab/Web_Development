#include <stdio.h>
int main()
{
   int n, sum = 0;

   {
      printf("Enter a number: ");
      scanf("%i", &n);
      sum += n;
   } while (n != 0);
   printf("Sum is = %d", sum);

   return 0;
}
