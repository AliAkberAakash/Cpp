#include<cstdio>
#include<iostream>

using namespace std;

template <typename T> T sum(T a, T b)
{
    return a+b;
}


int main()
{
    int x,y;
    double a,b;

    scanf("%d %d", &x, &y);
    scanf("%lf %lf", &a, &b);

    printf("%d %lf\n", sum(x,y), sum(a,b));

    return 0;
}
