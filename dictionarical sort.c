#include<stdio.h>


char copy(char* a, char* b)
{
    for(; *b; a++,b++) *a=*b;
    *a='\0';

    return 'x';
}


int comp(char* a,char* b)
{
    int comp=0;

    for(;; *a++,*b++)
    {
        if((*a>='A')&&(*a<='Z'))
            *a+=32;

        if((*b>='A')&&(*b<='Z'))
            *b+=32;

        if(*a<*b)
            break;
        else if(*a>*b)
        {
            comp=1;
            break;
        }
    }

    return comp;
}

void strswap(char a[],char b[])
{
    char t[128];

    copy(t,a);
    copy(a,b);
    copy(b,t);

}

int main()
{
    char name[21][128];
    int n,i,m;

    scanf("%d",&n);

    for(i=0; i<=n; i++) gets(name[i]);


    for(m=0; m<n-1; m++)
        for(i=0; i<n-1-m; i++)
        {
            if(comp(name[i],name[i+1]))
                                  strswap(name[i],name[i+1]);
        }

    for(i=0; i<=n; i++)
    {
        printf("\n");
        puts(name[i]);
    }
return 0;
}
