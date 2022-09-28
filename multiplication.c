#include<stdio.h>

int max;

int digit(int n)
{
    int i=1;
    for(; n; i++) n/=10;
    return i;
}

int E(int n)
{
    int x=1;
    for(; n; n--, x*=10) ;
    return x;
}

void gap(int n)
{
    int i=0, j;
    j= max-digit(n);
    for(; i<j; i++) printf(" ");
    printf("%d\n",n);
}


int main ()
{
    int x, y, num[8], z=0, n=0;

    scanf("%d%d",&x,&y);

    printf("\n\n\n");

    for(int a=y; a; a/=10, n++) num[n]= x*(a%10);
    for(int i=0; i<n; i++)
    {
        num[i]*=E(i);
        z+=num[i];
    }
    max=digit(z);
    gap(x);
    gap(y);
    printf("-------------------------- \n");
    for(int i=0; i<n; i++) gap(num[i]);
    printf("-------------------------- \n");
    printf("%d",z);

        printf("\n\n\n");

    return 0;
}
