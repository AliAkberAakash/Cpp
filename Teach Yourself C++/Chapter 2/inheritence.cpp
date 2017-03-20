#include<iostream>
#include<cstdio>

using namespace std;

class data
{
public:
    int* s;
    int pos,siz=10;

public:

    data();
    ~data();
};

data::data()
{
    pos=0;
    s = new int [siz];
}

data::~data()
{
    delete[] s;
}

class stacks : public data
{
public:
    //data(int SIZE);
    void push(int value);
    void pop();
    void print();
};

//stacks::data(int SIZE)
//{
//    pos=0;
//    s = new int [SIZE];
//}

void stacks::push(int value)
{
    if(pos>=siz)
    {
        printf("Not enough space to insert!\n");
        return;
    }

    s[pos]=value;
    pos++;
}

void stacks::pop()
{
    if(pos<=0)
    {
        printf("No element to delete!\n");
        return;
    }
    pos--;
}

void stacks::print()
{
    for(int i=0; i<pos; i++)
        printf("%d ", s[i]);
}

int main()
{
    stacks ob1;

    ob1.push(5);
    ob1.push(9);

    ob1.print();

    return 0;
}
