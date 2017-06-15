#include<iostream>

using namespace std;

class myClass
{
    int a,b;
public:
    myClass (int n, int m) { this->a=n; this->b=m; }
    int add() { return this->a + this->b; }
    void show();
};

void myClass :: show()
{
    int t;
    t=this->add();
    cout<<t<<endl;
}



int main()
{
    myClass ob(10,14);

    ob.show();

    return 0;
}
