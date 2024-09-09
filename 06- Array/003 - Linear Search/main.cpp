#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {

    for (int i = 0; i < n; i++) {

        if (arr[i] == key){
            return i; // Return the index where the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 8;
    int index = linearSearch(arr, n, key);

    if (index != -1){
        cout << "Element found at index " << index << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
