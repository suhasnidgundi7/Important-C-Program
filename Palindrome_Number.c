// Author : Suhas Nidgundi
// Website : https://suhasnidgundi.suveesoft.in/
// Description : A Palindrome Number is a Number That Is Some After Reverse, For Example 121, 34543, 343, 131, 48984 are the Palindrome Number

#include <stdio.h>

int main()
{
    int n, r, sum=0, temp;
    n = 121; // Check 'n' is Palindrome Number Or Not
    temp = n;

    while (n>0)
    {
        r = n%10;
        sum=(sum*10)+r;
        n=n/10;
    }

    if (temp==sum)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }    

    return 0;
}
