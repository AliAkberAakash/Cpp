#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

void rounD(double &k)
{
    double p,y;

    y=modf(k,&p);

    if(y<0.5)
        k=p;
    else
        k=p+1.0;
}

int main()
{
    double x;

    scanf("%lf", &x);

    rounD(x);

    printf("%lf\n", x);

    return 0;
}
