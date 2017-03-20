#include<iostream>
#include<cstdio>

using namespace std;

class something
{
    int i;
    public:
    something();
    ~something();
    void set_i(int x);
    int get_i();
};

something::something()
{
    i=0;
    printf("Constructing!\n");
}

something::~something()
{
    printf("Destructing for %d\n", i);
}

void something::set_i(int x)
{
    i=x;
}

int something::get_i()
{
    return i;
}

int yo(something* o)
{
    o->set_i(5);
    return o->get_i();
}

int main()
{
    something ob1;

    printf("%d\n", yo(&ob1));
    printf("%d\n", ob1.get_i());

    return 0;
}
