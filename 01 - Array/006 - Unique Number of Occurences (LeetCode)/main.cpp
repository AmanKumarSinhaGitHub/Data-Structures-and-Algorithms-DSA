#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        // Vector "occurrenceCounts" to store occurrences of numbers from -1000 to 1000
        // and initialized with a size of 2001 and all elements set to 0.
        vector<int> occurrenceCounts(2001, 0);

        // Counting occouring of each numbers
        for(int i=0; i<arr.size(); i++){

            // If the number is negative, store its occurrence at the corresponding index
            // For example, store -1's occurrence at index 1001
            if(arr[i]<0){
                // Increment the occurrence count for that negative number
                occurrenceCounts[(arr[i]*-1)+1000]++;
            }
            // If the number is positive or zero, store its occurrence at the corresponding index
            // For example, store 1's occurrence at index 1
            else{
                // Increment the occurrence count for that positive number
                occurrenceCounts[arr[i]]++;
            }
        }

        // Sorting the occurrences of each number
        sort(occurrenceCounts.begin(),occurrenceCounts.end());

        // Checking wheather the occurence are unique or not
        for(int i=1; i<occurrenceCounts.size(); i++){

            // If the current occurrence is non-zero and equal to the previous occurrence, 
            // it means the occurrences are not unique. So return false.
            if((occurrenceCounts[i]!=0) && occurrenceCounts[i]==occurrenceCounts[i-1]){
                return false;
            }
            
        }
        // All the elements' occurence have been checked, 
        // it means occurrence counts are unique. So return true.
        return true;

    }
};

int main() {
    
    Solution solution;

    // Test case 1
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    bool result1 = solution.uniqueOccurrences(arr1);
    cout << "Test Case 1: " << (result1 ? "true" : "false") << endl;

    // Test case 2
    vector<int> arr2 = {1, 2};
    bool result2 = solution.uniqueOccurrences(arr2);
    cout << "Test Case 2: " << (result2 ? "true" : "false") << endl;

    // Test case 3
    vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    bool result3 = solution.uniqueOccurrences(arr3);
    cout << "Test Case 3: " << (result3 ? "true" : "false") << endl;

    // ... additional test cases ...

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)