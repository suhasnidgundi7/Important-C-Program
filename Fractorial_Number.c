// Author : Suhas Nidgundi
// Website : https://suhasnidgundi.suveesoft.in/
// Description : Factorial Of n is The Product Of All Positive Descending Integers. Factorial of n is Denoted by n! For Example 5! = 5*4*3*2*1 = 120

#include <stdio.h>
int main()
{
    int i, fact = 1, number;
    number = 5; // 

    for (i = 1; i < number; i++)
    {
        fact = fact * i;        
    }

    printf("Factorial Of %d is : %d", number, fact);    

    return 0;
}
