#ifndef BIGINT_H
#define BIGINT_H
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
class BigInt{

private:
    string s;
    int arr[200];
    public:
        BigInt(string n = "");

        void setstring(string s1){
            s = s1;
        }

        string getstring(){
            return s;
        }

        void setarr(int arr1[200]){
            for(int i = 0; i < 200; i++){
                arr[i] = arr1[i];
            }
        }

        friend istream&operator>>(istream& in, BigInt &b1){
            in >> b1.s;
            return in;
        }

        friend ostream&operator<<(ostream&ou, BigInt &b1){
            ou << b1.s;
            return ou;
        }

        BigInt operator+(const BigInt &b);
        bool operator==(BigInt &b);
        };

#endif // BIGINT_H
