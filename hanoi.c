#include<stdio.h>

void hanoi(unsigned int n, char i, char d, char m)
{
    static k=0;
    if(!n) ;
    else
    {
        hanoi(n-1,i,m,d);
        printf("\n\t Step-%d. Move disk %d from %c to %c\n",++k,n,i,d);
        hanoi(n-1,m,d,i);
    }
}

int main()
{
    unsigned int n;

    printf("\n\tHow many disk?\n\t");
    scanf("%u",&n);

    printf("\n\t No.1 disk is the smallest. We will move the disks from I (initial) to D (destination). A medium is M\nThe Steps are\n.........................................................................................................\n");
    hanoi(n,'I','D','M');
    printf("\n\n\n\n");

 return 0;
}
