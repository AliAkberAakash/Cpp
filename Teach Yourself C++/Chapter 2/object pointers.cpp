#include<iostream>
#include<cstdio>

class myClass
{
    int a;
public:
    void get_a(int x);
    void print();
};

void myClass::get_a(int x)
{
    a=x;
}

void myClass::print()
{
    printf("%d\n", a);
}

int main()
{
    myClass ob1;
    myClass* p=NULL;

    p=&ob1;

    p->get_a(0);
    p->print();
    p->get_a(1);
    p->print();
    p->get_a(2);
    p->print();
    p->get_a(3);
    p->print();

    return 0;
}
