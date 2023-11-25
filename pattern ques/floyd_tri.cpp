#include <iostream>
using namespace std;

int main()
{
    int n;
    int i,j,k;

    k = 1;

    cout<<"enter num: ",cin>>n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }    

    return 0;
}