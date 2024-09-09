#include <iostream>
using namespace std;

int main() {
    
    // Store number in "int"
    int a = 10;

    // Store large number in "long"
    long b = 56893;

    // Store very large number in "long long"
    long long c = 897353749;

    // Store decimal number in "float"
    float d = 5.7;

    // Store large decimal number in "double"
    double e = 6787.09862;

    // Note : Use "cin>>" to get input and "cout<<" to get output
    
    
    
    //-----------------------------------------------------------------------------------//



    // Store a word or sentence in "String"

    string fullName;
    cout<<"Enter Your Full Name ";
    getline(cin, fullName); // Aman Kumar Sinha
    cout<<"Hello "<<fullName<<endl; // Hello Aman Kumar Sinha


    string name;
    cout<<"Enter Your First Name : ";
    cin>>name; // Aman Kumar Sinha
    cout<<"Hello "<<name<<endl; // Hello Aman

    // Note : If you want to store a single word, use "cin"
    // But If you want to store a sentence use "getline"



    // Store a character or letter in "Char"
    char ch = 'a';

    // Note : Use single quote to store char and double quote to store string.

    return 0;
}