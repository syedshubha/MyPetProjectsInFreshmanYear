#include<stdio.h>

int lpyr(int yr)
{
    return ((yr%400==0)? 1: (((yr%100==0)? 0: (((yr%4==0)? 1: 0)))));
}

void main()
{
    int yr,m,d,i,month[]= {31,28,31,30,31,30,31,31,30,31,30,31},total=-1,sat[6],sun[6],mon[6],tue[6],wed[6],thu[6],fri[6];
    sat[5]=sun[5]=mon[5]=tue[5]=wed[5]=thu[5]=fri[5]=0;

    printf("Enter a year after 1757 \t");
    scanf("%d",&yr);
    if(yr<1757)
    {
baal:
        printf("Fuck you");
        goto shubha;
    }
    for(i=1756; i<yr; i++)
        {
            int x= lpyr(i);
            if (i==1756) x=x-1;
            total+=(365+x)%7;

        }
    month[1]+=lpyr(i);
    printf("\n Enter month no.\t");
    scanf("%d",&m);
    if(m>12) goto baal;

    for(i=0; i<m-1;)
        total+=month[i++];

    switch(m)
    {
    case 1:
        printf("\n\n \t January %d",yr);
        break;
    case 2:
        printf("\n\n \t February %d",yr);
        break;
    case 3:
        printf("\n\n \t March %d",yr);
        break;
    case 4:
        printf("\n\n \t April %d",yr);
        break;
    case 5:
        printf("\n\n \t May %d",yr);
        break;
    case 6:
        printf("\n\n \t June %d",yr);
        break;
    case 7:
        printf("\n\n \t July %d",yr);
        break;
    case 8:
        printf("\n\n \t August %d",yr);
        break;
    case 9:
        printf("\n\n \t September %d",yr);
        break;
    case 10:
        printf("\n\n \t October %d",yr);
        break;
    case 11:
        printf("\n\n \t November %d",yr);
        break;
    default:
        printf("\n\n \t December %d",yr);
    }


    for(i=1; i<=month[m-1]; i++)
    {
        yr=total+i;

        yr=yr%7;

        switch(yr)
        {
        case 1:
            sat[sat[5]++]=i;
            break;
        case 2:
            sun[sun[5]++]=i;
            break;
        case 3:
            mon[mon[5]++]=i;
            break;
        case 4:
            tue[tue[5]++]=i;
            break;
        case 5:
            wed[wed[5]++]=i;
            break;
        case 6:
            thu[thu[5]++]=i;
            break;
        default:
            fri[fri[5]++]=i;
        }
    }

    printf("\n..................................................................\n\n\n");
    printf("\nSatunday :");
    for(i=0; i<sat[5]; i++) printf(" %2d ",sat[i]);
    printf("\nSunday   :");
    for(i=0; i<sun[5]; i++) printf(" %2d ",sun[i]);
    printf("\nMonday   :");
    for(i=0; i<mon[5]; i++) printf(" %2d ",mon[i]);
    printf("\nTuesday  :");
    for(i=0; i<tue[5]; i++) printf(" %2d ",tue[i]);
    printf("\nWednesday:");
    for(i=0; i<wed[5]; i++) printf(" %2d ",wed[i]);
    printf("\nThursday :");
    for(i=0; i<thu[5]; i++) printf(" %2d ",thu[i]);
    printf("\nFriday   :");
    for(i=0; i<fri[5]; i++) printf(" %2d ",fri[i]);

    printf("\n\n\n\n\n");

shubha:
    ;
}
