//Write a Program to Print Check Whether a Character is an Alphabet or Not
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the Alphabet: "<< endl;
    cin>>ch;
    if(isalpha(ch)){
        cout<< ch << " is a alphabet. "<<endl;
    }
    else{
        cout<<ch<<" is not alphabet. "<<endl;
    }
    return 0;
}