#include <iostream>
using namespace std;

int main()
{

    /*  """"""""""""""""""""""""""""""If - Else""""""""""""""""""""""""""""""

    Q1. Write a Program that take "age" as an input and tell whether he/she is eligible to drive or not.

    *** Condition ***
    If age is greater than or equal to 18, then Yes
    Otherwise No.

    */

    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Yes, You can drive." << endl;
    }
    else
    {
        cout << "You cannot drive" << endl;
    }

    // Note : It is not mandatory to have an else statement..

    /* """""""""""""""""""""""""If - Else ladder"""""""""""""""""""""""""

    Q2. Write a program to make this grade system.

    a. Below 25 = F
    b. 25 to 44 = E
    c. 45 to 49 = D
    d. 50 to 59 = C
    e. 60 to 79 = B
    f. 80 to 100 = A

    Ask the user to enter marks and print the corresponding grade.

    */

    cout << "Enter your marks : ";
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "F" << endl;
    }
    else if (marks <= 44)
    {
        cout << "E" << endl;
    }
    else if (marks <= 49)
    {
        cout << "D" << endl;
    }
    else if (marks <= 59)
    {
        cout << "C" << endl;
    }
    else if (marks <= 79)
    {
        cout << "B" << endl;
    }
    else if (marks <= 100)
    {
        cout << "A" << endl;
    }

    /* """"""""""""""""Nested If-else""""""""""""""""

    Take the age from the user and then decide accordingly

    a. If age < 18
        print-> not eligible for work
    b. If age >= 18 and age <=54
        print-> eligible for job
    c. If age >= 55 and age <=57
        print-> eligible for job, but retirement soon
    d. If age > 57
        print-> retirement time
    */

    cout << "Enter your age : ";
    int yourAge;
    cin >> yourAge;

    if (yourAge < 18)
    {
        cout << "Not eligible for work" << endl;
    }
    else if (yourAge <= 57)
    {
        cout << "Eligible for Job" << endl;
        if (yourAge >= 55)
        {
            cout << "But retirement soon" << endl;
        }
    }
    else
    {
        cout << "It's retirement time" << endl;
    }

    return 0;
}