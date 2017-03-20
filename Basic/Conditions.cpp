/*
Program Name:
Details:
Solved By: Liverwort
Date:
*/

#include<iostream>


int main()
{
    using namespace std;

    int x,y;

    cin>>x;
    cin>>y;

    if(x>y)
        cout<<x<<" is the largest number\n";
    else if(x<y)
        cout<<y<<" is the largest number\n";
    else
        cout<<"Both "<<x<<" and "<<y<<" are equal\n";


    return 0;
}

