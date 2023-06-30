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
    // Declaration and Initialization of an Array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Printing Array 
    printArray(numbers, (sizeof(numbers) / sizeof(int)));

    // Output : 
    // Printing Array
    // 10 20 30 40 50

    return 0;
}
