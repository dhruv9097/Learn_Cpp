#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"sum till? : ",cin>>n;

    int sum = 0;

    for(int i = 0; i <= n; i++){
        sum = sum + n;

    }

    cout<<sum<<endl;

    return 0;
}