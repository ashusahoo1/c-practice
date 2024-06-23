
#include <stdio.h>
#include <math.h>


int main()
{
   int side;
   printf("what is the length of the side\n");
   scanf("%d", &side);
   printf("the area of the square is %f", pow(side,2));  //dont use %d as pow gives values in double not integer


    return 0;
}
