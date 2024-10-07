//Write a C++ Program to Check Whether a Number is a Positive or Negative Number.
#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if (a>=0){
        cout << a << " is positive "<<endl;
    }
    else{
        cout << a << " is negative "<<endl;
    }
    return 0;
};