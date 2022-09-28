#include<stdio.h>
#include<string.h>


char x='(', y=')', s[100], S[100], lib[10000000][100];
int m,r,count=0;


int check(char *a)
{
    int i=0;
    if(*a==0) return 1;
    else if ((*a==y)&&(*(a+1)==x)&&(m==2)) return 0;
    else
    {
        for(; !(*(a+i)==x) + !(*(a+i+1)==y); i++);

        while(i<(2*m))
        {
            *(a+i)=*(a+i+2);
            i++;
        }
        m--;
        check(a);
    }
}

int is(char *a)
{
    int i=-1;
    while((++i)<=count)
    {
        if(!strcmp(lib[i],a)) break;
    }
    if(i==count+1) return 1;
    else return 0;
}

void swap(char*g, char *h)
{
    char t=*g;
    *g=*h;
    *h=t;
}

void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
    {
        m=r;
        strcpy(S,a);

        if(check(S))
        {

            if(!count)
            {
                strcpy(lib[count],a);
                printf("\n%d. %s",count+1,a);
            }
            else
            {
                if(is(a))
                {
                    count++;
                    strcpy(lib[count],a);
                    printf("\n%d. %s",count+1,a);
                }
            }
        }
    }
    else
    {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            permute(a, i + 1, n);
            swap((a + i), (a + j));
        }
    }
}

int main()
{
    int i=0;
    scanf("%d",&r);

    while(i<r) s[i++]=x;
    while (i<(2*r)) s[i++]=y;
    s[i]=0;

    permute(s,0,2*r-1);
    return 0;
}
