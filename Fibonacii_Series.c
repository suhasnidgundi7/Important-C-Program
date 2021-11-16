// Author : Suhas Nidgundi
// Website : https://suhasnidgundi.suveesoft.in/
// Description : In Case Of Fibonacii Series Next Number is the sum of previous two number for example : 0, 1, 1, 2, 3, 5, 8, 13, 21 etc. the first two numbers of Fibonacii Series are 0 and 1

#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    number = 0;
    printf("\n%d %d", n1, n2);

    // Loop Starts From 2 Because 0 and 1 is already printed
    for (i=2; i < number; ++i)
    {
        n3=n1+n2;
        printf(" %d", n3);
        n1=n2;
        n2=n3;
    }
    
    return 0;
}
