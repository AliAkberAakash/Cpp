#include<cstdio>
#include<iostream>
using namespace std;

#define SIZE 10

class stackk
{
    char stck[SIZE];
    int tos;

public:
    void init();
    void push(char ch);
    char pop();

};


void stackk::init()
{
    tos=0;
}

void stackk::push(char ch)
{
    if(tos>=10)
    {
        printf("No place to add!!\n");
        return;
    }

    stck[tos]=ch;
    tos++;
}

char stackk::pop()
{
    if(tos==0)
    {
        printf("The string is empty!!\n");
        return 0;
    }

    tos--;
    return stck[tos];

}

int main()
{

    stackk o1,o2;

    o1.init();
    o2.init();

    o1.push('a');
    o2.push('b');

    cout<<o1.pop()<<"\n"<<o2.pop()<<endl;


    return 0;
}

