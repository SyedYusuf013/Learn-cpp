#include<iostream>
using namespace std;

int main(){
/*
   int n;
   cin>>n;

  //cout<< "value of n is :" << endl;
  //if a is positive
    if(n>0){
        cout<<"N is Positive"<<endl;
    }
    else{
        cout<<"N is Negative"<<endl;
    }
*/
/*
    int a;
    a = cin.get();
    cout<<"value of a is : "<< a <<endl;
*/
/*
    int a,b;

    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    if(a>b){
        cout<<"A is greater :"<<endl;
    }
    if(b>a){
        cout<<"B is greater :"<<endl;
    }
*/
/*
    int a;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;

    if(a>0){
        cout<<"A is positive :";
    }
    else{
        if(a<0){
            cout<<"A is Negative :";
        }
        else{
            cout<<"A is zero :";
        }
    }
*/
/*
    int a;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;

    if(a>0){
        cout<<"A is positive :";
    }
    else if(a<0){
        cout<<"A is Negative :";
    }
    else{
        cout<<"A is zero :";
    }
*/  
/*
    int a = 2;
    int b = a+1;

    if((a=3)==b){
        cout<<a;
    }
    else{
        cout<<a+1;
    }
*/
/*
//Homework
    char a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;

    if(islower(a)){
        cout<<"A is Lower case: "<< a <<endl;
    }
    else if(isupper(a)){
        cout<<"A is Upper case: "<< a <<endl;
    }
    else if(isdigit(a)){
       cout<<"A is Numeric case: "<< a <<endl;
    }
    else{
        cout<<"A is neither Lower,upper, nor numeric case: "<< a <<endl;
    }
*/
/*
    int n;
    cout<<"Enter the value : "<< endl;
    cin>>n;

    int i = 1;
    while(i<=n){
        cout<< i <<" ";
        i = i+1;

    }
*/
/*
    int n;
    cout<<"Enter the value : "<< endl;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i + 1;
    }
    cout<< "Value of sum is "<< sum<<endl;
*/
/*  find all even no.s
    int n;
    cout<<"Enter the value : "<< endl;
    cin>>n;

    int i = 2;
    int even_sum = 0;

    while(i<=n){
        even_sum = even_sum + i;
        cout << i << " ";
        i = i + 2;
    }
    cout<< endl<< "Value of even_sum is "<< even_sum;
*//*
    int f;
    cout<<"Enter the value : "<< endl;
    cin>>f;

    int i = 72;
    while(i<=f){
        double c = (i - 32.0) * 5.0/9.0;
        cout<<i<< "        "<< c << endl;
        i = i + 1;
    }
*/
/*  temperature convertor
    int startFahrenheit, endFahrenheit, step;

    cout << "Enter the start temperature in Fahrenheit: ";
    cin >> startFahrenheit;

    cout << "Enter the end temperature in Fahrenheit: ";
    cin >> endFahrenheit;

    cout << "Enter the step size: ";
    cin >> step;

    cout << "Fahrenheit   Celsius" << endl;
    cout << "------------------" << endl;

    int currentFahrenheit = startFahrenheit;
    while (currentFahrenheit <= endFahrenheit) {
        // Conversion formula: Celsius = (Fahrenheit - 32) * 5/9
        double celsius = (currentFahrenheit - 32.0) * 5.0 / 9.0;
        cout << currentFahrenheit << "           " << celsius << endl;
        currentFahrenheit += step;
    }
*//*

    double fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Conversion formula: Celsius = (Fahrenheit - 32) * 5/9
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;

    return 0;
*//*
    Calculator
    char operation;
    double num1, num2;

    cout << "Enter an operation (+, -, *, /, %): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case '%':
            cout << num1 << " % of " << num2 << " = " << (num1 / 100) * num2 << endl;
            break;
        default:
            cout << "Invalid operation. Please enter +, -, *, /, or %." << endl;
    }

    return 0;
*//* Fibonacci series

    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        cout << nextTerm << " ";
    }

    cout << endl;

    return 0;
*/
/*
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int i = 2;

    while(i<n) {
        //divide hogya, not prime
        if(n%i!=0){
            cout<< "Not Prime No. "<< i << endl;
        }
        else{
            cout<<"Prime No. "<< i <<endl;
        }
        i = i + 1;
    }
*//*
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int i = 2;
    bool isPrime = true;

    while(i < n) {
        if(n % i == 0) {
            isPrime = false;
            break; // If it's divisible by any number, it's not prime, so we break out of the loop.
        }
        i = i + 1;
    }

    if (isPrime && n > 1) {
        cout << n << " is a Prime Number." << endl;
    } else {
        cout << n << " is not a Prime Number." << endl;
    }

    return 0;
*//*
    int n;
    cin>>n;
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n){
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;

        i = i + 1;

    }
*//*
    int n;
    cin>>n;
    int r = 1;
    while(r<=n) {
        int c = 1;
        while(c<=n){
            cout<< r;
            c = c + 1;
        }
        cout<<endl;

        r = r + 1;

    }
*//*
    int n;
    cin>>n;
    int r = 1;
    while(r<=n) {
        int c = r;
        while(c<=n){
            cout<< r;
            c = c + 1;
        }
        cout<<endl;

        r = r + 1;

    }
*/

}




