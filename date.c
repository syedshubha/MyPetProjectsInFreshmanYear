#include<stdio.h>

int lpyr(int yr)
{
    int x;
    x=((yr%400==0)? 1: (((yr%100==0)? 0: (((yr%4==0)? 1: 0)))));
    return x;
}

void main()
{
    int yr,m,d,i,month[]= {31,28,31,30,31,30,31,31,30,31,30,31},total=-1;

    printf("Enter year after 1971 \t");
    scanf("%d",&yr);
    if(yr<1971)
    {
baal:
        printf("Fuck you");
        goto shubha;
    }
    for(i=1971; i<yr; i++)
        total+=(365+lpyr(i))%7;

    month[1]+=lpyr(i);
    printf("\n Enter month no.\t");
    scanf("%d",&m);
    if(m>12) goto baal;

    printf("\n Now Enter the day \t");
    scanf("%d",&d);
    if(d>month[m-1]) goto baal;

    for(i=0; i<m-1;)
        total+=month[i++];

    total+=d;

    total=total%7;

    switch(total)
    {
    case 1:
        printf("\nSaturday");
        break;
    case 2:
        printf("\nSunday");
        break;
    case 3:
        printf("\nMonday");
        break;
    case 4:
        printf("\nTuesday");
        break;
    case 5:
        printf("\nWednesday");
        break;
    case 6:
        printf("\nThursday");
        break;
    default:
        printf("\nFriday");
    }
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

shubha:
    ;
}
