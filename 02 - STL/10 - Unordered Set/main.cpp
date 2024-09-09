#include <bits/stdc++.h>
using namespace std;

// Unordered set (unordered_set) has similar functionality as a set,
// storing unique elements. However, it does not store elements in a sorted order.
// Elements are stored in a random order based on the internal hash function.
// The time complexity for most operations is O(1), making it efficient in most cases.
// However, in some cases where collisions occur, the complexity may degrade.

void explainUSet() {

    unordered_set<int> st;

    // lower_bound() and upper_bound() functions are not available in unordered_set.

    // All other functions, such as insert, erase, find, size, and empty, are the same as in set.

    // The main difference is that elements are stored in a random order based on the internal hash function.
}


int main() {
	
    explainUSet();

    return 0;
}
