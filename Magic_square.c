#include<stdio.h>

int A[10][10], n, i,k,j;


int main()
{
    while((n<2)|| (n>10))
                 scanf("%d",&n);

    if(n%2)
    {
        j= (n-1)/2;
        for(k=1; k<=n*n; )
        {
        A[i--][j++]= k++;

        if(!((k-1)%n))
        {
            i+=2;
            j--;
            continue;
        }

        if(i<0)
            i=n-1;
        if(j==n)
            j=0;
        }

        for(i=0; i<n; i++)
        {
            printf("\n");
            for(j=0; j<n; j++)
                printf("%2d\t",A[i][j]);
        }

    }
    else
    {
        if(n>2) printf("\npossible to build, but it is difficult! Not interested today");
        else printf("\nimpossible to build");
    }

    return 0;
}
