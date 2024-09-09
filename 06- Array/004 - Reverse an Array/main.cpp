#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int arr[], int size) {

    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    /* Code in short (this will also reverse the array)

    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
    */
}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int n = sizeof(arr)/sizeof(int);

    cout<<"Original Array : ";
    printArray(arr, n);

    // Reversing Array
    reverseArray(arr, n);

    cout<<"Reversed Array : ";
    printArray(arr, n);
    
    return 0;
}