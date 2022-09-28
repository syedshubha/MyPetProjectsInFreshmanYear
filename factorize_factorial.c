#include<stdio.h>
#include<math.h>

void prime(int a[], int n, int* k)
{
    int i=2,j,r=0;

    for(;i<=n;i++)
      {
          for(j=2; i%j; j++);
            if(i==j) a[r++]=i; }
            *k=r;
}

int main()
{
    int n,i,j,p[1000],a[1000],m,div;

    printf("\n\n\n\tthe program can factorize n! \n\t.....................................................\n\n \tEnter n \t",&n);
    scanf("%d",&n);
    prime(p,n,&m);

    if(n<2)
        {printf("\n\nNo prime factor");
        goto shubha;}

    else
    for(i=0; i<m; i++)
    {
         a[i]=0;
      j=1;
     while(j)
     {
         div=n/((int)pow(p[i],j));
         a[i]+=div;
         if(!div) break;
         j++;
     }

    }
    printf("\n\n\t%d!= ",n);
    for(i=0;i<m;i++)
    {
        if(i) printf(" x ");
        printf("%d^%d",p[i],a[i]);
    }
    printf("\n\n\n\n\tConcept by: Syed Emad Uddin Shubha\n\n\n");

   shubha: return 0;
}

