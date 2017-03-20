/*
*
* Program Name:
* Details:
* Solved By: Liverwort
* Date:
*
*/

#include<iostream>


int main()
{
    using namespace std;

    double feet, inch;

    while(cin>>feet)
    {
        if(!feet)
            break;

        cout<<feet*12<<" inch\n";
    }


    return 0;
}

