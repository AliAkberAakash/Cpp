#include<cstdio>
#include<iostream>

using namespace std;

class my
{
    int n,z;
public:
    my(int x, int y) { n=x; z=y; }
    void print();
};

void my::print()
{
    printf("%d %d", n,z);
}

int main()
{
    my ob[2][4]={
        my(1,2), my(3,4), my(5,6), my(7,8),
        my(10,20), my(30,40), my(50,60), my(70,80)
    };


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            ob[i][j].print();
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}
