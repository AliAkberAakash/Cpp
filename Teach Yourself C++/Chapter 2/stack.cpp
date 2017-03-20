#include<iostream>
#include<cstdio>

#define SIZE 1

using namespace std;

class stacks
{
    //private
    int elements[SIZE];
    int pos;
public:

    void push(int data);
    void pop();
    void print();
    stacks();
    ~stacks();

};

stacks::stacks()
{
    //initializing the first index to 0;
    pos=0;
}

stacks::~stacks()
{
    //destroying
    printf("\nDestroying....\n");
}

void stacks::push(int data)
{
    if(pos>=SIZE)
    {
        printf("Not enough space to insert!!\n");
        return;
    }
    elements[pos]=data;
    pos++;
}

void stacks::pop()
{
    if(pos==0)
    {
        printf("No more elements to delete!\n");
        return;
    }
    pos--;
}

void stacks::print()
{
    for(int i=0; i<pos; i++)
        printf("%d ", elements[i]);
}

int main()
{
    stacks ob1;

    ob1.push(4);
    ob1.push(5);
    ob1.push(6);


    ob1.print();

    printf("\n");

    for(int i=0; i<4; i++)
        ob1.pop();

    ob1.print();

    return 0;

}
