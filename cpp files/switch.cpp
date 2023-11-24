#include <iostream>
using namespace std;

int main()
{
    
    int n1,n2,s;
    char op;
    
    cout<<"enter two numbers: "<<endl;
    cin>>n1>>n2;

    cout<<"enter the operator: "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        s = n1 + n2;
        cout<<s;
        break;
    
    case '-':
        s = n1 - n2;
        cout<<s;
        break;

    case '*':
        s = n1 * n2;
        cout<<s;
        break;

    case '/':
        s = n1 / n2;
        cout<<s;
        break;
    

    default:
        cout<<"enter another operator.";
        break;
    }



}