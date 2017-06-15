#include<iostream>

using namespace std;

void swaps(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
}

int main()
{
    int a(5),b(10);

    swaps(a,b);

    cout<<a<<" "<<b<<endl;

    return 0;
}
