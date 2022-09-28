#include<stdio.h>

void main()
{
    int a[100000], n,i,j,l=0;

    printf("How many student?\n\t");
    scanf("%d",&n);

    for(i=1;i<=n;i++) a[i]=0;

    for(j=1;j<=n;j++)
        for(i=1;i<=n;i++)
          if(!(i%j))
             a[i]=!a[i];

    for(i=1;i<=n;i++)
        l+=a[i];

    printf("\n\nTotal locker unlocked is %d \n\n\n",l);
}
