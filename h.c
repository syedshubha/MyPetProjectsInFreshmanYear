#include<stdio.h>
#include<math.h>

int fun(double a)
{
int i ;
for(i=0; ( a-(int)a ) != 0; i++)
a = a*10 ;
return i ;
}

int main()
{ /*
double x,y,z ;
int l,m,i,j,k,a,b,n ;
x=6;
y=8;
z=2;

l = fun(x)>fun(y) ? fun(x) : fun(y) ;
m = l>fun(z) ? l : fun(z) ;
i = x*pow(10,m) ;
j = y*pow(10,m) ;
k = z*pow(10,m) ;
a = i<j ? i : j ;
b = a<k ? a : k ;

for(n=b; i%n!=0 || j%n!=0 || k%n!=0; n--)
{

}
//printf("%g",n/pow(10,m)) ; */
printf("%d", fun(2.8783));
}
