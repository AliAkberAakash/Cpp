#include<iostream>
#include<cstdio>

class absolute
{
public:
    int abs(int a);
    long int abs(long int a);
    double abs(double a);
};


int absolute::abs(int a)
{
    return a>0?a:(-a);
}

long int absolute::abs(long int a)
{
    return a>0?a:(-a);
}

double absolute::abs(double a)
{
    return a>0?a:(-a);
}

int main()
{
    absolute ob1;
    absolute* p=NULL;

    p=&ob1;

    printf("%d\n", p->abs(-9));
    printf("%ld\n", p->abs(-34L));
    printf("%lf\n", p->abs(-9.262387));

    return 0;
}
