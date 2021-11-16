// Author : Suhas Nidgundi
// Website : https://suhasnidgundi.suveesoft.in/
// Description : Armstrong Number is a Number that is equal to the sum of cubes of its digits For Example : 153 = (1*1*1) + (5*5*5) + (3*3*3)

#include <stdio.h>

int main()
{
    int n, r, sum =0, temp;
    printf("Enter The Number");
    scanf("%d", &n);
    temp = n;

    while (n>0)
    {
        r=n%10;
        sum = sum+(r*r*r);
        n = n/10;
    }
    
    if (temp==sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    

    return 0;
}
