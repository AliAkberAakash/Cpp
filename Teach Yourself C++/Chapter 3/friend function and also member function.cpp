#include<cstdio>
#include<iostream>

using namespace std;

class truck;

class car
{
    int passangers;
    int speed;

public:
    car(int x) { speed=x; };
    int sp_comp(truck t);
};

class truck
{
    int weight;
    int speed;

public:
    truck(int x) { speed=x; };
    friend int car::sp_comp(truck t);
};

int car::sp_comp(truck t)
{
    return speed-t.speed;
}

int main()
{
    car c1(10); truck t1(20);

    int t=c1.sp_comp(t1);

    if(t>0)
        printf("Car is faster!\n");
    else if(t<0)
        printf("Truck is faster!\n");
    else
        printf("Equal speed!\n");

    return 0;
}
