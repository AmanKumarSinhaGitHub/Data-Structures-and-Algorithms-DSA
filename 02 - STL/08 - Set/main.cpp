#include <bits/stdc++.h>
using namespace std;

// set is an container that stores a sorted collection of "unique" elements.
// Duplicate values are not allowed in a set.
// Elements in a set are automatically "sorted in ascending" order based on their values.
// The sorting is performed using the less-than (<) operator by default, 
// but you can customize it by providing a comparison function.

void explainSet() {

	set<int>st;

	st.insert(1); // {1}
	st.emplace(2); // {1, 2}
	// Duplicate values are not inserted
	st.insert(2); // {1, 2}
	st.insert(4); // {1, 2, 4}
	st.insert(3); // {1, 2, 3, 4}
	st.insert(5); // {1, 2, 3, 4, 5}

	// Prints elements in sets
	for (auto i : st) {
        cout << i << " ";
    }
	// Output : 1 2 3 4 5 

    // These functions have the same functionality as in other containers:
    // begin(), end(), rbegin(), rend(), size(), empty(), and swap().....


	
	// Find element 3 in the set. Returns an iterator pointing to element 3 if found, or end() otherwise.
	auto it = st.find(3); // {1, 2, 3, 4, 5}


	// {1, 2, 3, 4, 5}
	auto itt = st.find(6);

	// {1, 4, 5}
	st.erase(5); // erases 5 // takes logarithmic time

	// If exist, it must have one occurence. if not exist it will return 0
	int cnt = st.count(1); 


	auto itr = st.find(3);
	st.erase(it); // it takes constant time

	// {1, 2, 3, 4, 5}
	auto it1 = st.find(2);
	auto it2 = st.find(4);
	st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

	// lower_bound() and upper_bound() function works in the same way as like vector

	// This is the syntax
	auto it3 = st.lower_bound(2); 

	auto it4 = st.upper_bound(3); 

	/* 
	lower_bound(): Returns an iterator pointing to the first element 
	that is not less than the specified value in a sorted container.

	upper_bound(): Returns an iterator pointing to the first element 
	that is greater than the specified value in a sorted container.

	*/
}


int main(){

	explainSet();

    return 0;
}