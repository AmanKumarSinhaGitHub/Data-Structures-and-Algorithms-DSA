#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> cnt;

        // Counting occouring of each numbers 
        for (auto i : arr) {
            cnt[i]++;
        }

        /* For array [-3, 0, 1, -3, 1, 1, 1, -3, 10, 0]

           num   count
            -3 -> 3
            0  -> 2 
            1  -> 4
            10 -> 1

        */

        // Storing occurences of every num in a set
        unordered_set<int> cntSet;

        for (auto i : cnt) {
            // i.second -> count of occurence of the num
            cntSet.insert(i.second);
        }

        /* For array [-3, 0, 1, -3, 1, 1, 1, -3, 10, 0]

           num   count
            -3 -> 3
            0  -> 2 
            1  -> 4
            10 -> 1

            cnt set = {3, 2, 4, 1}

        */
    

        // If the set size is equal to the map size, 
        // It means occurence of each num are unique. 
        // (Because set only stores unique numbers)
       
        if(cnt.size() == cntSet.size()){
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{

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
// Space Complexity : O(n)