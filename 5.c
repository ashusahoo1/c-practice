//program to sum first n natural numbers

#include <stdio.h>
int main()
{
   int i,n, sum=0;
   printf("what is the number\n");
   scanf("%d", &n);

   for (int i = 0; i <=n; i++)
   {
     sum+=i;
     if (i<n)
     {
        continue;
     }
     
     printf("the sum of 1 to %d is %d \n",n, sum);
   }
     




    return 0;
}
