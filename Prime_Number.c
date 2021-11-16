// Author : Suhas Nidgundi
// Website : https://suhasnidgundi.suveesoft.in/
// Description : Prime Number is a number that is greater than 1 and divided by 1 or itself. In other Words, Prime Number can't be divided by other numbers than itself or 1

#include <stdio.h>

int main()
{
    int n, i, m=0, flag=0;
    n = 2; // Number to Check If It Is Prime Or Not
    m = n / 2;

    for (i = 2; i <= m; i++)
    {
        if (n%i==0)
        {
            printf("Number is Not Prime Number");
            flag=1;
            break;
        }
        
    }

    if (flag==0)
    {
        printf("Number is Prime Number");
    }    

    return 0;
}
