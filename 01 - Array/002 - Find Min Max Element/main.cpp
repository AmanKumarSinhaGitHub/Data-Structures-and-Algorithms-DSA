#include <iostream>
using namespace std;

void findMinAndMaxElement(int arr[], int n){

    int minEle = INT_MAX;
    int maxEle = INT_MIN;

    for(int i=0; i<n; i++){
        
        // Finding Minimum Element
        minEle = min(minEle, arr[i]);
    
        // Finding Maximum Element
        maxEle = max(maxEle, arr[i]);
    }
   
    cout<<"Minimum Number is "<<minEle<<endl;
    cout<<"Maximum Number is "<<maxEle<<endl;
}


int main()
{
    
    int arr[] = {20, 10, 30, 50, 40};

    // Size of array
    int n = sizeof(arr)/sizeof(int);

    findMinAndMaxElement(arr, n);

    
    return 0;
}
