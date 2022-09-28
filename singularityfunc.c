// the goal of the program is to check whether i am right or not

#include<stdio.h>

int u(float t)
{
   return t>0 ? 1:0;
}

void main()
{
    float t,v;
    scanf("%f",&t);
    v=10*t*(u(t)-u(t-2))-10*(t-4)*(u(t-2)-u(t-4)); //write your equation here
    printf("\nvoltage is %f at t=%f",v,t);
}
