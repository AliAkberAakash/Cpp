#include<iostream>
#include<cstdio>

using namespace std;

class yo
{
    int n,d;
public:
    yo(int x, int y) { n=x; d=y; }
    friend int imAfriend(yo ob);
};

int imAfriend(yo ob)
{
    if(!(ob.n%ob.d)) return 1;
    else return 0;
}

int main()
{
    yo ob1(11,5);

    if(imAfriend(ob1))
        printf("Divisible!\n");
    else
        printf("Not Divisible!\n");

    return 0;
}
