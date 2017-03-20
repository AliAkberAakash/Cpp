#include<iostream>
#include<windows.h>
#include<cstdio>
#include<cstdlib>

using namespace std;

class draw
{
    int len;
    public:
    draw(int a);
    ~draw();
    void line();

};

draw::draw(int a)
{
    len=a;
}

void draw::line()
{
    for(int i=0; i<len; i++)
        {
            Sleep(500);
            printf("*");
        }
}

draw::~draw()
{
    system("cls");
}

int main()
{
    draw ob1(100);
    draw* p=NULL;

    p=&ob1;

    p->line();

    Sleep(1000);


    return 0;
}
