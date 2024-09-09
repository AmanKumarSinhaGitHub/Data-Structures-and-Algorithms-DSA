# Reverse Numbers in Array

This program demonstrates how to reverse the numbers in an array using C++. The program takes an array of numbers as input and reverses the order of the elements.

## Algorithm

The algorithm for reversing the numbers in an array is as follows:

1. Start with an array of numbers.
2. Initialize two pointers, `start` and `end`, to the first and last indices of the array, respectively.
3. Swap the number at the `start` index with the number at the `end` index.
4. Increment the `start` pointer and decrement the `end` pointer.
5. Repeat steps 3-4 until the `start` pointer surpasses the `end` pointer or they meet in the middle of the array.
6. The numbers in the array are now reversed.

## Complexity

`The time complexity of the algorithm is O(n/2)`, which simplifies to O(n), where n is the number of elements in the array.
This is because the algorithm iterates through half of the array to perform the swapping operation.

`The space complexity is O(1)` since the algorithm operates in-place without requiring additional memory.

## Here's an example of the program:

```cpp
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
}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr)/sizeof(int);

    cout<<"Original Array : ";
    printArray(arr, n);

    // Reversing Array
    reverseArray(arr, n);

    cout<<"Reversed Array : ";
    printArray(arr, n);

    return 0;
}
```

In this example, an array `{1, 2, 3, 4, 5}` is defined. 

The `reverseArray` function is called with the array and its size. After executing the function, the array is reversed. The program then prints both the original and reversed arrays.

When you run this program, it will output:

```
Original array: 1 2 3 4 5
Reversed array: 5 4 3 2 1
```

This indicates that the numbers in the array have been successfully reversed.

---