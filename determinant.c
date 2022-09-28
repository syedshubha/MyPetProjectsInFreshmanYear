#include <stdio.h>

float s (int i)
{
    return i%2? -1.0:1.0;
}

float det(float a[][10],int n)
{
    float b[10][10],d,m;
    int i,j,u,v,k=0;

    if(n==1)
        d=a[0][0];

    else
    {
        d=0;

        for(; k<n; k++)
        {
            u=-1;
            i=0;

            while(i<n-1)
            {
                j=v=0;
                u++;

                if(u==0) continue;

                while(j<n-1)
                {
                    if(v==k)
                    {
                        v++;
                        continue;
                    }

                    else b[i][j++]=a[u][v++];
                }

                i++;
            }

            m=det(b,n-1);

            d+= s(k)* a[0][k] * m;
        }

    }

    return d;
}


int main()
{
    float Matrix[10][10],d,k;
    int n, i=0,j;

    x: printf("\n\n\tEnter order (a square matrix A has n x n order, enter n: \t");
    scanf("%d",&n);

    if(n<1) goto x;

    for(; i < n; ++i)
    {
        for(j = 0; j <n; ++j)
        {
            printf("\n \tEnter A[%d][%d]\t",i+1,j+1);
            scanf("%f", &Matrix[i][j]);
        }
    }

    d=det(Matrix,n);
    i=d;
    k=i;

    if(d!=k)
                printf("\n\n\t Det(A)=%f\n\n",d);
    else
        printf("\n\n\t Det(A)=%d\n\n",i);

    return 0;
}
