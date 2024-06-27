#include <stdio.h>
int main()
{int a, b, c;
printf("enter the value of first number\n");
scanf("%d", &a);
printf("enter the value of second number\n");
scanf("%d", &b);
printf("enter the value of third number\n");
scanf("%d", &c);

if (a>b && a>c)
{
    printf("the greatest number is %d", a);
}
if (b>a && b>c)
{
    printf("the greatest number is %d", b);
}
if (c>b && c>a)
{
    printf("the greatest number is %d", c);
}



    
}
