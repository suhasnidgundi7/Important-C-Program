// Author : Suhas Nidgundi
// Website : https://suhasnidgundi.suveesoft.in/
// Description : We can use the Find Palindrome Number Algorithm to Reverse a Number. We only Need to Make Some Few Changes in Program

#include <stdio.h>

int main()
{
    int n, reverse=0, rem;
    printf("Enter a Number : ");
    scanf("%d", &n);

    while (n!=0)
    {
        rem = n%10;
        reverse = reverse*10+rem;
        n/=10;
    }
    
    printf("Reversed Number : ", reverse);

    return 0;
}
