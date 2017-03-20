#include<cstdio>
#include<iostream>

using namespace std;

class box
{
    double side1,side2,side3,volume;

public:

    box(double a, double b, double c);
    //compute();
    void vol();

};

box::box(double a, double b, double c)
{
    side1=a;
    side2=b;
    side3=c;
}

//box::compute()
//{
//    volume=side1*side2*side3;
//}

void box::vol()
{
    volume=side1*side2*side3;

    if(!volume)
        printf("Error!! The values were not inputed!\n");
    else
        printf("%lf\n", volume);
}

int main()
{
    box x(2.3,5.4,6.45);

    printf("The volume is ");
    x.vol();

    return 0;
}
