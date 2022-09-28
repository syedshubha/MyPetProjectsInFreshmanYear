#include<stdio.h>

int lpyr(int yr)
{
    return ((yr%400==0)? 1: (((yr%100==0)? 0: (((yr%4==0)? 1: 0)))));
}

int main()
{
    int yr,y, d=0,i=0;

    printf("\n\n\t enter a year .... \t \t ");
    scanf("%d",&yr);

    printf("\n\n\tyou can use the calender of %d , in the upcoming years of\n",yr);
    y=yr;
    while(1)
    {
        d+= 1+ lpyr(y);
        y++;
        if((!(d%7))&(!((lpyr(yr))^(lpyr(y)))))
        {
            i++;
            printf("\n\t\t\t%d ",y);
            if(i>16) break;
        }
    }
}
