#include <iostream>
using namespace std;

int main()
{
    int n;
    int i,j;
    

    cout<<"enter num: ",cin>>n;

    for(i = 1; i <= n; i++)
    {
        
        int space = n-i;
        for(j = 1; j<=space; j++)
        {
            cout<<" ";
        }

        for(j = 1; j <= n; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }    

    return 0;
}