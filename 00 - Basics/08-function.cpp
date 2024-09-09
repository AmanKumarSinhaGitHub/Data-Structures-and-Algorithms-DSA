#include <iostream>
using namespace std;

/*
functions are set of code which performs something for you
functions are used to modularize code
functions are used to increase readability
functions are used to use same code multiple times */

// void function
void greeting()
{
    cout << "Hello" << endl;
}

// function can return some values
string yourName()
{

    cout << "Enter your name : ";
    string name;
    cin >> name;

    return name;
}

// function can take parameters

void printAge(int yourAge)
{
    cout << "Your age is " << yourAge << endl;
}

int main()
{

    greeting();

    string name = yourName();
    cout << "Welcome " << name << endl;

    int age;
    cout << "Enter your age : ";
    cin >> age;
    printAge(age);

    return 0;
}