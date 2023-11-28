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
            cout<<"  ";
        }

        k = i;

        for(; j <= n; j++)
        {
            cout<<k--<<" ";
        }

        k=2;

        for(; j <= n+i-1; j++)
        {
            cout<<k++<<" ";

        }

        cout<<endl;
    }    

    return 0;
}