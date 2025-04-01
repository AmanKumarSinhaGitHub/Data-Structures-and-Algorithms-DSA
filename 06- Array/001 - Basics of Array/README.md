# Introduction to Arrays in C++  

## What is an Array?  
An **array** is a collection of elements of the same data type, stored in **contiguous memory locations**. It allows easy access to multiple values using a single variable name and an index.

## Declaring an Array  
In C++, an array is declared as follows:  
```cpp
dataType arrayName[arraySize];
```
Example:  
```cpp
int numbers[5]; // Declares an integer array of size 5
```

## Initializing an Array  
Arrays can be initialized at the time of declaration:  
```cpp
int numbers[5] = {10, 20, 30, 40, 50}; 
```
Here, `numbers` is an array of **5 integers** with predefined values.

## Accessing Array Elements  
Array elements are accessed using an **index**, starting from `0`.  
Example:  
```cpp
cout << numbers[0]; // Outputs 10
cout << numbers[2]; // Outputs 30
```

## Example Code: Printing an Array  
```cpp
#include <iostream>
using namespace std;

void printArray(int arr[], int lengthOfArray)
{
    cout << "Printing Array" << endl;

    for (int index = 0; index < lengthOfArray; index++)
    {
        cout << arr[index] << " ";
    }
    cout << endl;
}

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printArray(numbers, sizeof(numbers) / sizeof(int));

    return 0;
}
```

### Output:  
```
Printing Array  
10 20 30 40 50  
```

## Key Concepts in Arrays  
- **Fixed Size**: The size of an array is fixed at the time of declaration.  
- **Indexing**: Array indices start from `0`.  
- **Contiguous Memory**: Array elements are stored next to each other in memory.  
- **Pass by Reference**: When passing an array to a function, its reference is passed, not a copy.  

Arrays are fundamental in C++ programming and are widely used for storing and manipulating data efficiently. 🚀