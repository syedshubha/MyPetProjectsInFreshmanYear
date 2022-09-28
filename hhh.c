#include<stdio.h>
#include<string.h>

typedef struct
{
   char name[100];
   int roll;
   int mark;
} std;


void main()
{
 std st[100],t;
 int i=0, j=0, n;
 scanf("%d",&n);
 for(;j<n;j++) scanf("%s %d %d",st[j].name, &st[j].roll, &st[j].mark);

 for(;i<n-1;i++)
    for(j=0; j<n-1-i; j++)
      if(st[j].mark < st[j+1].mark)
                  {
                     t=st[j];
                     st[j]=st[j+1];
                     st[j+1]=t;
                  }
    for(j=0; j<n; j++) printf("\n%s %d %d \n",st[j].name, st[j].roll, st[j].mark);
}
