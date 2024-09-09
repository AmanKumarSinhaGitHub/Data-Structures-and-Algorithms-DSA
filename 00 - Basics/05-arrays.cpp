#include <iostream>
using namespace std;

// When we have to store "similar type of data" in a collection, we use array;

// array hold data in continuous block of memory

int main()
{

    // created an array of size 3
    // in array index starts with 0;
    int arr[3];

    // taking input
    cin >> arr[0] >> arr[1] >> arr[2];

    // printing output
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    // You can update an array element's data
    arr[0] = 10;
    cout << arr[0] << endl;

    //-----------------------------------------------

    // """""""""""""""2D Array""""""""""""""""""
    int ar[2][6]; // Created an array of 2 rows and 6 columns

    return 0;
}