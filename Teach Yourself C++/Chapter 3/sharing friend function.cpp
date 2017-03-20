#include<iostream>
#include<cstdio>

using namespace std;

class truck;

class car
{
    int passengers;
    int speed;
public:
    car(int x, int y) { passengers=x; speed=y; }
    friend int sp_diff(car c, truck t);
};

class truck
{
    int weight;
    int speed;
public:
    truck(int x,int y) { weight=x; speed=y; }
    friend int sp_diff(car c, truck t);
};

int sp_diff(car c, truck t)
{
    return c.speed-t.speed;
}

int main()
{
    car ob1(5,100);
    truck ob2(100, 100);

    if(sp_diff(ob1, ob2)>0)
        printf("The car is faster!\n");
    else if(sp_diff(ob1, ob2)<0)
        printf("The truck is faster!\n");
    else
        printf("They are both equal in speed!\n");


    return 0;
}
