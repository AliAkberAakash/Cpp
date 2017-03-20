#include<iostream>
#include<cstdio>

using namespace std;

class st
{
    int i;
public:
    st();
    ~st() { printf("Destructing!\n"); }
    void print();
};

st::st()
{
    i=5;
    printf("constructing!\n");
}

void st::print()
{
    printf("%d\n", i);
}

st yo()
{
    st ob;
    return ob;
}

int main()
{
    st ob2;

    ob2=yo();

    ob2.print();

    return 0;
}
