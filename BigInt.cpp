#include "BigInt.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

BigInt::BigInt (string n){       //setter for n
    s = n;
}

BigInt BigInt::operator+(const BigInt &b){

    BigInt b1;
    string r = b.s;
    int j = b.s.size() - 1;
    int sum[200] = {0};

    int temp1 = s.size();       //temp for first string of chars
    int temp2 = b.s.size();     //temp for second string of chars

    if(temp1 > temp2){
        temp2 = temp1 - temp2;
        for(int i = 0; i < temp2; i++){
            r = "0" + r;
        }
    }
    else{
        temp1=temp2-temp1;
        for(int i=0; i<temp1; i++){
            s="0"+s;
        }
    }
    for(int i = s.size() - 1; i >= 0; i--){
        sum[i] = ((int)(r[i]) - 48) + ((int)(s[i]) - 48);
    }

    for (int i = s.size()-1; i>=0; i--){
        while(sum[i] >= 10){
            if(i == 0)
                break;
            sum[i] -= 10;
            sum[i-1] += 1;
        }
    }

    string sa = "";
    for (int i = 0; i < s.size(); i++){
        switch (sum[i]){
        case 0:
            sa += "0";
            break;
        case 1:
            sa += "1";
            break;
        case 2:
            sa += "2";
            break;
        case 3:
            sa += "3";
            break;
        case 4:
            sa += "4";
            break;
        case 5:
            sa += "5";
            break;
        case 6:
            sa += "6";
            break;
        case 7:
            sa += "7";
            break;
        case 8:
            sa += "8";
            break;
        case 9:
            sa += "9";
            break;


        }
    }
    b1.s = sa;
    return b1;
}
bool BigInt::operator==(BigInt &b){

    return s == b.s;

}
