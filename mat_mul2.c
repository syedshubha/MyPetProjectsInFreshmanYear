//Source Code for Matrix Multiplication in C without using function

#include <stdio.h>

int main()
{
    int m, n, p, q, c, d, k;
    float first[10][10], second[10][10], multiply[10][10],sum=0;

    printf("\nEnter the number of rows and columns of first matrix:\n");
    scanf("%d%d", &m, &n);

    //Entering elements of first matrix
    printf("\nEnter the elements of first matrix\n");
    for (  c = 0 ; c < m ; c++ )
        for ( d = 0 ; d < n ; d++ )
            scanf("%f", &first[c][d]);

    printf("\nEnter the number of rows and columns of second matrix:\n");
    scanf("%d%d", &p, &q);

    //Checking if Matrix Multiplication is possible
    if ( n != p )
    {
        printf("\nMatrices with entered orders can't be multiplied with each other.\n");
        printf("\nThe column of first matrix should be equal to row of second.\n");
    }
    else
    {
        //Entering elements of second matrix
        printf("\nEnter the elements of second matrix:\n");
        for ( c = 0 ; c < p ; c++ )
            for ( d = 0 ; d < q ; d++ )
                scanf("%f", &second[c][d]);

        //Carrying out matrix multiplication operation
        for ( c = 0 ; c < m ; c++ )
        {
            for ( d = 0 ; d < q ; d++ )
            {
                for ( k = 0 ; k < p ; k++ )
                {
                    sum = sum + first[c][k]*second[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        //Printing the final product matrix
        printf("\nThe product of entered matrices is:\n");
        for ( c = 0 ; c < m ; c++ )
        {
            for ( d = 0 ; d < q ; d++ )
                printf("%f\t", multiply[c][d]);

            printf("\n");
        }
    }

    return 0;
}
