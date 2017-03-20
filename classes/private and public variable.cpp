#include<stdio.h>
#include<iostream>

using namespace std;

class aakash
{
    int a;

public:
    void get_a(int x);
    int print_a();
};

void aakash::get_a(int x)
{
    a=x;
}

int aakash::print_a()
{
    return a;
}

int main()
{
    aakash o1,o2;

    o1.get_a(5);
    o2.get_a(10);

    cout<<o1.print_a()<<endl;
    cout<<o2.print_a()<<endl;


    return 0;
}
