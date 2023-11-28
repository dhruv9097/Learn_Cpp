#include <iostream>
using namespace std;

int main()
{

    int n;
    int i,j,k;
    

    cout<<"enter num: ",cin>>n;

    for(i = 1; i <= n; i++)
    {

        int space = n-i;
        for(j = 1; j<=space; j++)
        {
            cout<<" ";
        }


        for(j=1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }



    for(i = n; i >= 1; i--)
    {

        int space = n-i;
        for(j = 1; j<=space; j++)
        {
            cout<<" ";
        }


        for(j=1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }



        cout<<endl;
    }    

    return 0;
}