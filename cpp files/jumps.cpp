#include <iostream>
using namespace std;

int main(){

    int pocketmoney = 2000;    // limited money :(

    for(int days = 1; days<=30; days++ ){

        if(days%2==0){          //can go out on odd days only :(
            continue;
        }

        if(pocketmoney == 0){   //no pocket money no fun , cant go out
            break;
        }

        cout<<days,cout<<"th goin out today"<<endl;   //yey going out
        pocketmoney = pocketmoney-200;   //going out and spending money
        
    }

    return 0;
}