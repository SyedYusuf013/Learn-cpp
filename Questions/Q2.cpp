//Write a Program to Find the Greatest of the Three Numbers.
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    if ((a>b) & (a>c)){
        cout << " a is the greatest no. "<<a<< endl;
    }
    else if ((b>c) & (b>a)){
        cout << " b is the greatest no. "<< b<< endl;
    }
    else{
        cout << " c is the greatest no. "<<c<< endl;
    }
    
};