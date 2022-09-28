#include<stdio.h>

char x='(',y=')',*p=&x;
int m;

int check(char *a)
{
  int i=0;
  if(*a==0) return 1;
  else if ((*a==y)&&(*(a+1)==x)&&(m==2)) return 0;
  else
  {
      for(;!(*(a+i)==x)| !(*(a+i+1)==y);i++);

      while(i<(2*m))
      {
          *(a+i)=*(a+i+2);
          i++;
      }
      m--;
      check(a);
  }
}


int main()
{
    int n=0,a=0,b=0;
    char s[1000],S[1000];

    while(++n)
    {
        scanf("%c",&s[n-1]);

        S[n-1]=s[n-1];

        if(s[n-1]=='\n')
        {
            S[n-1]=0;
            s[n-1]=0;
            break;
        }
            else if(s[n-1]==x) a++;
            else if(s[n-1]==y) b++;
    }

    p=S;

    m=a;

   printf("%d",a==b?check(p):0);

    return 0;
}
