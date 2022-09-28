#include<iostream>

using namespace std;


class RationalNumber
{

private:

    int num=0, den=1;

    int gcd(int x, int y)
    {
        return y? gcd(y,x%y):x;
    }

    void value(int* a, int *b)
    {
        int gc= gcd(*a, *b);

        (*a)/=gc;
        (*b)/=gc;

        if((*b)<0)
        {
            *a= - (*a);
            *b= - (*b);
        }
    }


public:
	
	RationalNumber()
	{
	}

    RationalNumber(int x, int y)
    {
        num=x;
        den=y;
        value(&num,&den);
    }

    RationalNumber operator+(const RationalNumber& cse)
    {
        RationalNumber result;
        result.num = (this->num)*(cse.den) + (this->den)*(cse.num);
        result.den = (this->den)*(cse.den);

        value(&result.num, &result.den);

        return result;
    }

    RationalNumber operator-(const RationalNumber& cse)
    {
        RationalNumber result;
        result.num = (this->num)*(cse.den) - (this->den)*(cse.num);
        result.den = (this->den)*(cse.den);

        value(&result.num, &result.den);

        return result;
    }

    RationalNumber operator*(const RationalNumber& cse)
    {
        RationalNumber result;
        result.num = (this->num)*(cse.num);
        result.den = (this->den)*(cse.den);

        value(&result.num, &result.den);

        return result;
    }

    RationalNumber operator/(const RationalNumber& cse)
    {
        RationalNumber result;
        result.num = (this->num)*(cse.den);
        result.den = (this->den)*(cse.num);

        value(&result.num, &result.den);

        return result;
    }

    bool operator==(const RationalNumber& cse)
    {
        return ((this->num ==cse.num) && (this->den ==cse.den)) ? true: false;
    }

    void print();
};


void RationalNumber :: print()
{
    cout<< RationalNumber :: num << "/" << den;
}

RationalNumber x,y ;

void operation (RationalNumber z, string s)
{
    x.print();
    cout<< s;
    y.print();
    cout<< " = ";
    z.print();
    cout<< "\n";
}



int main()
{

    int a, b, c, d;

    cin>> a >> b >> c>> d;

    x=RationalNumber(a,b);
    y=RationalNumber(c,d);

    operation(x+y," + ");

    operation(x-y," - ");

    operation(x*y," x ");


    operation(x/y," / ");

    x.print();
    cout<< " and ";
    y.print();
    (x==y) ? cout<<" are identical": cout<< " are not identical";


    return 0;
}
