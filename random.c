#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;
    unsigned i=0,n,a,b,x;

    printf("Enter your range (Enter equal number for default range!)\n");
    scanf("%u %u",&a,&b);
    if(a>b) a^=b^=a^=b;

    printf("\nHow many random natural number do you want? \n ");
    scanf("%u",&n);

    printf("\n\n Printing %d integers",n);
    if(a!=b) printf(" between %d and %d....\n",a,b);

     srand((unsigned) time(&t));

   while(i<n)
    {
       if(a==b) x=rand();
       else x=a+(rand())%b;
       printf("\n%d",x);
        i++;
    }

    printf("\n\n\n\n\n\n");

    return 0;
}
