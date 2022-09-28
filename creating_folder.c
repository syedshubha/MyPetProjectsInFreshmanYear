#include<stdio.h>
#include<windows.h>

int main()
{
    int i;
    char s[50],name[50];

    printf("What is the common name for folders?\n");
    scanf("%s",s);
    printf("\nHow many folders?\n");
    scanf("%i",&i);

    for(int j=1; j<=i; j++)
        {
          sprintf(name,"mkdir  %d",s,j); //though don't work properly, but it is a system;
          system(name);
        }

    return 0;
}
