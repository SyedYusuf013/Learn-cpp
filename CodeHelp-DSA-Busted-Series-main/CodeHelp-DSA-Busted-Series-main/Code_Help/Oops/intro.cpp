#include<iostream>
#include "Hero.cpp"
using namespace std;


class Hero{
// for identification an empty class take one bite of memory in stack;


// properties;
private:

int health;

public:
char *name;

char level;

//non parameterised;
Hero(){
    cout<<"constructor called"<<endl;
    name = new   char[100];
}

// parameterised constructor;

Hero(int health){
    cout<<"this->"<<this<<endl;
    this->health =health; //this->health is ramesh value;

}

Hero(int health ,char level,char name){    
    this->health =health; 
    this->level =level;
    // this->name =name;
}

// copy constructor 

Hero(Hero &temp){
    cout<<"copy constructor"<<endl;
    this->health=temp.health;
    this->level = temp.level;
}








void print(){

    cout<<endl;
    cout<<"name:"<<this->name<<endl;
      cout<< this->health<<endl;
    cout<<this->level<<endl;
}

// getter function;
int gethealth(){
    return health;
}
char getlevel(){
    return level;
}


// setter function;
void sethealth(int h){
    health=h;
}

void setlevel(char ch){
     level = ch;
}


void setname(char name[]){
    strcpy(this->name,name);
}





};
int main(){


Hero hero1;
hero1.sethealth(12);
hero1.setlevel('D');
char name[7]="Hamid";
hero1.setname(name);

hero1.print();








    /*

Hero S(70 ,'D');
S.print();


// copy constructor;

Hero R(S);
R.print();
*/





/*
// object created statically;

cout<<"hii"<<endl;
Hero ramesh(20);
cout<<"Adress of ramesh" << &ramesh<<endl;
ramesh.gethealth();

cout<<"hello"<<endl;


//dynamically call;
Hero *h =new Hero(11);


*/






/*
// object created statically;

cout<<"hii"<<endl;
Hero ramesh;


cout<<"hello"<<endl;


//dynamically call;
Hero *h =new Hero;*/




 /*   
// static allocation 
Hero a;

cout<<a.gethealth()<<endl;
cout<<a.level<<endl;


// dynamic alocation of object;
Hero *h =new Hero;

cout<< (*h).gethealth()<<endl;//because first we decode the address of the variable h;
cout<< (*h).level<<endl;

cout<< h->gethealth()<<endl;
cout<< h->level<<endl;

*/




// creation of object;
    // Hero Ramesh;//static allocation of object;

// cout<<"Ramesh health is:"<<Ramesh.gethealth()<<endl;
    // Ramesh.health = 39;
    // Ramesh.level = 'A';

//    Ramesh.sethealth(70);

// cout<<"health is:"<< Ramesh.gethealth()<<endl;
// cout<<"level is:"<< Ramesh.level<<endl;

// cout<<"Size :"<< sizeof(h1)<<endl;

return 0;
}