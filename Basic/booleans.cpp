/*
Program Name: Booleans.
Details:
Solved By: Liverwort
Date: 15.6.16
*/

#include<iostream>
#include<stdio.h>


int main()
{
    using namespace std;

    int x,y,z;

    cin>>x;
    cin>>y;
    cin>>z;

    if(x>y&&x>z)
        printf("%d is the largest number.\n", x);
    else if(y>x&&y>z)
        printf("%d is the largest number.\n", y);
    else if(z>x&&z>y)
        printf("%d is the largest number.\n", z);
    else
        cout<<"The numbers are equal";



    return 0;
}

