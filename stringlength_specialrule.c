#include<stdio.h>

int main()
{
    char s[1000];
    scanf("%[^\n]",s);
    printf("%d",sprintf(s,"%s",s));
    return 0;
}
