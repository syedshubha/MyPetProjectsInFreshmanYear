#include<stdio.h>


int main()
{
    unsigned int n,i,j,k=-1;
    scanf("%u",&n);

    if(n<2) printf("No prime factor");

    for(i=2; i<=n; i++)
    {
        if(!(n%i))
        {
            if(i==j)
            {
                k++;     //to ensure the correct position of multiplication sign
                if(k) printf("x");

                for(j=1; !(n%i); j++) n/=i;   //to know about power
                printf("%d^%d",i,j-1);  //to print as a^b form
            }
        }
    }
    return 0;
}
