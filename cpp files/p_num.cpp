#include <iostream>
using namespace std;

int main(){

    int n;
    int i;

    cout<<"enter number to check prime or not: ",cin>>n;

    for (i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            cout<<"num is not prime"<<endl;
            break;

        }
    }
    
    if(i==n)
    {
        cout<<"number is prime ";
    }

    



    return 0;
}