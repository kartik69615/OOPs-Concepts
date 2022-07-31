#include<bits/stdc++.h>
using namespace std;

// class take 1 byte of space in memory without any data member

class Hero {
    // Access Modifier : Determined the scope of the data member.
    //properties , private members : Data member only accessible with the class only
    // all the member after this declration become the private member

    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    //Simple Constructor
    //once we implement our own constructor, the built-in contructor(default constructor) is no longer accessible
    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        // "this" keyword store the address of the current object
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor

    //Default copy constructor used shallow copy
    //User defined copy constructor used deep copy
    //Must be passed by refrence, because if passed by value it will again call copy constructor and trap in a loop.

    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Methods : 

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    // Getters and Setters to access and update the private data member outside the class.

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    // Static function can only access the static data members.
    static int random() {
        return timeToComplete ;
    }

    //Destructor
    //Memory deallocation : for static allocation it will automatically called, for dynamic allocation destructor have to be create manually
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }

};

//Intialize static data member outside the class
int Hero::timeToComplete = 5;

int main() {

    //cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;

    // cout << a.timeToComplete << endl;


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;



     // * Constructor and Destructor are called only once during creation and deletion of objects respectively.
     // * Static keyword : it belongs to the class , i.e to access the static data there is no need to create objects.








    // //Static Declaration of Objects
    // Hero a;

    // "." operator is used to access the data member
    // a.health

    // //Dynamic Declaration of Objects
    // Hero *b = new Hero();

    //  "->" operator is used to access the data member
    // b->health.
    // // ** manually destructor call for dyanamically allocated objects.
    // delete b;




// shallow copy : access same memory but with different names.
// deep copy : access different memory.


//     Hero hero1;

//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babbar";
//     hero1.setName(name);

//     //hero1.print();

//     //use default copy constructor

//     Hero hero2(hero1);
//     //hero2.print();
// //    Hero hero2 = hero1;

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     hero1 = hero2;

//     hero1.print();

//     hero2.print();


    













    // //Hero tt;

    // //object created statically
    // Hero ramesh(10);
    // //cout << "Address of ramesh " << &ramesh << endl;
    // ramesh.print();

    // //dynamically
    // Hero *h =  new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();














    /*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;
    //dynamicallly
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;
    cout << "level is  " << b->level << endl;
    cout << " health is " << b->getHealth() << endl;
    */
    


    // //creation of Object
    // Hero ramesh;   
    // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

    // cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // //use setter
    // ramesh.setHealth(70);
    // ramesh.level = 'A';


    // cout << "health is: " << ramesh.getHealth() << endl; 
    // cout << "Level is: " << ramesh.level << endl; 

    // //cout << "size : " << sizeof(h1) << endl;


    return 0;
}