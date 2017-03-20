#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

class stacks
{
    int pos;
    int sizE;
    int* a=NULL;

public:

    stacks(int SIZE);
    ~stacks();
    void push(int x);
    void pop();
    void print();
    int Size();
    int last();
};

stacks::stacks(int SIZE)
{
    pos=0;
    sizE=SIZE;
    a= (int*) malloc(sizeof(int)*sizE);
}

stacks::~stacks()
{
    free(a);
}

void stacks::push(int x)
{
    if(pos>sizE)
    {
        printf("No place to insert!!!\n");
        return;
    }

    a[pos]=x;
    pos++;
}

void stacks::pop()
{
    if(pos<=0)
    {
        printf("No more element to delete!\n");
        return;
    }

    pos--;
}

int stacks::Size()
{
    int q=pos-1;
    return q;
}

int stacks::last()
{
    int q=pos-1;
    return a[q];
}

void stacks::print()
{
    for(int i=0; i<pos; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    stacks ob1(10);

    ob1.push(10);
    ob1.push(20);
    ob1.push(30);

    ob1.print();

    ob1.pop();

    printf("\n");

    ob1.print();



    return 0;
}
