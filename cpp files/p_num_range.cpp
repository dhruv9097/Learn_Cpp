#include <iostream>
using namespace std;

int main(){

    int a, b;
    int num;
    int i;

    cin>>a>>b;      //taking input

    for(num = a; num<=b; num++)     //number rage
    {
        for(i=2; i<num; i++)        //prime number range
        {
            if(num%i==0)        //non prime number...dont have to print 
            {
                break;
            }
        }

        if(i==num)      //prime number
        {
            cout<<i<<endl;
        }
    }


    return 0;
}