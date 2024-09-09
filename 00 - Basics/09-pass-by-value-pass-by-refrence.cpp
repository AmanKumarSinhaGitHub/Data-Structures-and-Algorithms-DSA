#include <iostream>
using namespace std;

//""""""""""""""" Pass By Value"""""""""""""""

// In this method, the copy of the parameter is send. and it's does not change the actual parameter

void increaseTheNumberByTen(int number)
{
    number += 10;
}

// """"""""""""Pass By Refrence"""""""""""""""""

// In this method, the address is received by the function
void increaseTheNumberByTwenty(int &number)
{
    number += 20;
}

int main()
{
    int num1 = 45;

    // sending copy to the function
    increaseTheNumberByTen(num1);
    cout << num1 << endl; // output : 45

    // sending address of the data to function
    increaseTheNumberByTwenty(num1);
    cout << num1 << endl; // output : 65

    // Note : If you pass an array to the function, it always pass through the the refrence
    return 0;
}