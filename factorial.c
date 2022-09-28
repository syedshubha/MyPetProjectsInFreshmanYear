// C program to find factorial of any real number

#include<stdio.h>

#include<math.h>


int check(double x)
{
    double y;
    int z;

    z=(int) x;

    y=z;

    if(x==y)
        return 1;

    else
        return 0;
}


int main()
{
    double n,x=0,y,d=0.001,s=0,k,p;
    long long int i,S=1,m;

    printf("\n\tThis program can find factorial of n (which is written as n!)\n\n\t\t enter n\t");

    scanf("%lf",&n);

    m=(int) n;


    if(check(n)*(n<=25))
    {
        if(m<0)
            printf("\n\n\n\n\t\tComplex infinity! ",m);
        else
        {

            for(i=2; i<=m; i++)
                S*=i;

            printf("\n\n\t \t %lld",S);
        }
    }

    else
    {
        if(n>102)
            printf("\n\n\n\n\t\tOut of Computation range") ;

        else
        {
            if(n>0)
                     k=n;
            else
            {
                y=(int) (2-n);

                k=y+n-1;

                p=y-1;
            }

            for(i=0; i<=1000000; i++)
            {
                y=pow(x,k)*exp(-x);

                x+=d;

                s+=y*d;
            }

            printf("\n\n\n\t\t");

            if(n<25)
            {
                if(n>0)
                    printf(" %.3lf (approximately)",s);

                else
                {
                    for(; p; p--) s/=(p+n);

                    i=(int) s;

                    if(i==0)
                        printf("%E (approximately)",s);
                    else
                        printf(" %.3lf (approximately)",s);
                }
            }
            else
                printf(" %E (approximately)",s);
        }
    }
    printf("\n\n\n\n \tConcept: Syed Emad Uddin Shubha \n\n\n\n\n");

    return 0;
}
