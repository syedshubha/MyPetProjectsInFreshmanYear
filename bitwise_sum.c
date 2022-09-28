#include<stdio.h>


int main()
{
    int a, b,c=0,s=0,d,i,x,y;

    scanf("%d %d",&a,&b);

    for(i=0; i<=31; i++)
    {
        x=a&(1<<i);

        y=b&(1<<i);

        d=((x^y)^c) !=0 ;

        c=((x&y)|(y&c)|(x&c)) !=0 ;

        d<<=i;
        s=s|d;
    }

    printf("\nSum is %d \n\n",s);

    return 0;
}
