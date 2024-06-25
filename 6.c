//making a function to sum two numbers

#include <stdio.h>

int sum(int a, int b); //function prototypr

int main()
{ int c;
    c= sum(2,5);   //function call
    printf("The value of c is %d", c);

    return 0;
}

int sum(int a,int b){          //function definition
    int result;
    result= a+b;
    return result;
}
 
