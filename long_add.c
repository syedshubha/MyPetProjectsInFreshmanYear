#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000],b[10000],c[10001],d=0;
    int x,y,i;

    printf("num_1\n");
    gets(a);
    strrev(a);
    x=strlen(a);

    printf("\nnum_2\n");
     gets(b);
    strrev(b);
    y=strlen(b);

    if(x>y)
    {
        for(;y<=x;y++) b[y]='0';
        a[x]='0';
        a[x+1]='\0';
        b[y+1]='\0';
    }
    else
        {
        for(;x<=y;x++) a[x]='0';
        b[y]='0';
        b[y+1]='\0';
        a[x+1]='\0';
    }

    for(i=0;a[i];i++)
    {
       c[i]=a[i]-'0'+b[i]+d;

       if(c[i]>'9')
       {
           c[i]=c[i]-10;
           d=1;
       }
       else d=0;
    }

    printf("\n\n num_1+num_2:\n");

    for(;i+1;i--) printf("%c",c[i]);

    printf("\n\n\n\n");

    return 0;
}
