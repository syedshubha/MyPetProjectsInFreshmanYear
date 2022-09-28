#include <stdio.h>


  long long int count=0;


  void fill(char*a, int n)
  {
      int i=0;
      char c='a';
      for(;i<n;i++)
      *a++=c++;
      *a=0;
  }



int check(char* a)
{
    int j=1;
    char *p=a+1, *q=a+2;

    if(*p==0)
         return j;

    else if(*q==0)
         return 0;
    else
    {
        while(*q)
        {
            if((*a== *p +1)||(*a== *p -1)||(*q== *p +1)||(*q== *p-1))
            {
                j=0;
                break;
            }
            else
            {
                a++;
                p++;
                q++;
            }
        }
        return j;
    }
}


void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void permute(char *a, int i, int n)
{
   int j;
   if (i == n)
     {
         if(check(a))
         {
              count++;
         printf("\n\n\t\t %lld. %s",count,a);
         }
     }
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a + i), (a + j));
          permute(a, i + 1, n);
          swap((a + i), (a + j)); //backtrack
       }
   }
}


int main()
{
   char str[21];
   int n=1;

   for(;n<=5;n++)
  {
      printf("\n\n\n\t\t\t\tn=%d",n);
   fill(str,n);
   permute(str, 0, n - 1);
   printf("\n\n\t\tTotal %lld found for n=%d\n\n\n",count,n);
   count=0;
  }
   return 0;
}
