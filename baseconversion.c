#include<stdio.h>

int n,k;

char gg(int x)
{
    return x<10? x+'0':x-10+'A';
}

void base(unsigned x)
{
    if(x==0)
    {
        if(k==0) printf("%u",x);
        else ;
    }
    else
    {
        k++;
        base(x/n);
        printf("%c",gg(x%n));
    }
}

int main()
{
    int x;

    printf("x in 10-base will be converted to n-base\nEnter x & n\t");
    scanf("%d %d",&x,&n);

    if((n<0)||(x<0)||(n>36))
        printf("\nCan't convert");
    else
    {
        printf("\n");
        base(x);
    }

    printf("\n\n");

    return 0;
}
