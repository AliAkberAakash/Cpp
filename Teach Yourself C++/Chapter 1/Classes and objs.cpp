#include<iostream>
#include<cstdio>

class myClass{
    int a;
public:
    void set_a(int x);
    int ret_a();
};

void myClass::set_a(int x)
{
    a=x;
}

int myClass::ret_a()
{
   return a;
}

int main()
{
    myClass ob;

    ob.set_a(3);

    printf("%d\n", ob.ret_a());

    return 0;
}

