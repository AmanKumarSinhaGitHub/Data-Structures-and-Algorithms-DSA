# Linear Search

Linear search is a simple search algorithm that sequentially checks each element in a list or array until it finds the target element or reaches the end of the list.

## Algorithm

1. Start at the first element of the array.
2. Compare the current element with the target element.
3. If the current element is equal to the target element, return the index.
4. If the current element is not equal to the target element, move to the next element.
5. Repeat steps 2-4 until either the target element is found or the end of the array is reached.
6. If the target element is not found after iterating through the entire array, return -1 to indicate its absence.

## Complexity

The `time complexity of linear search is O(n)`, where n is the number of elements in the array.

This is because in the worst case scenario, the algorithm may need to check each element of the array sequentially until it finds the target element or reaches the end.

The `space complexity is O(1)` since linear search only requires a few extra variables for index tracking.

## Implementation

Here's an example implementation of linear search in C++:

```cpp

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

```

This implementation demonstrates how to perform linear search in C++. 

The `linearSearch` function takes an array `arr`, its size `n`, and the target element `key` as input.

It iterates through each element of the array, comparing it with the target element. If a match is found, the function returns the index of the element. If the entire array is traversed without finding the target element, the function returns -1. 

The `main` function calls `linearSearch` with the array, its size, and the target element, and then prints whether the element was found or not.

When you run this program, it will output:

```
Element found at index 2
```

This indicates that the element 8 was found at index 2 in the array.

---