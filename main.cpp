#include <iostream>
#include "BigInt.h"
#include "BigInt.cpp"

using namespace std;

int main()
{
    BigInt a,b,c;
    int x;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter 1 to add \n2 to compare the 2 numbers  \n0 to end ";
    cin>>x;
    while(x!=0){
    if(x==1){
        c=a+b;
        cout<<"the sum of the two numbers is "<<c<<endl;
    }
    else if(x==2){
        if(a==b){
            cout<<"the two  numbers are equal"<<endl;
        }
        else{
            cout<<"the two numbers are not equal"<<endl;
        }

    }
    cout<<"enter 1 to add and 2 to compare the 2 numbers or 0 to exit";
    cin>>x;
    }

    return 0;
}
