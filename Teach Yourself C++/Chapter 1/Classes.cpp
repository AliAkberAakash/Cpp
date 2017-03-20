/*
*
* Program Name:
* Details:
* Solved By: Liverwort
* Date:
*
*/

#include<iostream>

    class myClass
    {
        //private
        int a;

    public:
        void set_a(int num);
        int get_a();
    };

    void myClass::set_a(int num)
    {
        a=num;
    }

    int myClass::get_a()
    {
        return a;
    }

    int main()
    {
        using namespace std;

        myClass obj1,obj2;

        obj1.set_a(10);
        obj2.set_a(99);

        cout<<obj1.get_a() <<"\n";
        cout<<obj2.get_a() <<"\n";

        return 0;
    }

