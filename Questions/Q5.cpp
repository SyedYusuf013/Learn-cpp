//Write a Program to Check Whether a Character is a Vowel or Consonant
#include <iostream>
using namespace std;

/*bool isVowel(char ch) {
    // Convert the character to lowercase to handle both uppercase and lowercase input
    ch = tolower(ch);

    // Check if the character is a vowel
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char character;

    // Get user input
    cout << "Enter a character: ";
    cin >> character;

    // Check if the input is a single character
    if (isalpha(character) && (sizeof(character) == 1)) {
        // Check if the character is a vowel
        if (isVowel(character)) {
            cout << character << " is a vowel." << endl;
        } else {
            cout << character << " is a consonant." << endl;
        }
    } else {
        cout << "Please enter a valid single character." << endl;
    }

    return 0;
}*/
int main(){
    char ch;
    cout << "Enter the character: "<< endl;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<< "The character is vowel: "<< endl;
    }
    else{
        cout<<"The character is consonent: "<<endl;
    }
    return 0;
    }