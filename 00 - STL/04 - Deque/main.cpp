#include <bits/stdc++.h>
using namespace std;

/*

In C++, deque (pronounced "deck") stands for "double-ended queue."

It is also similar to list and vector 

It is a container class provided by the Standard Template Library (STL) that allows efficient insertion and deletion at both the beginning and the end of the sequence.

A deque is implemented as a dynamic array of fixed-size buffers. This structure enables efficient insertion and deletion at both ends without invalidating pointers or references to elements. 
Unlike vector, which is implemented as a dynamic array, deque does not require reallocation and copying of elements when its size changes.

You can use the deque class by including the <deque> header file. 

*/


void explainDeque() {

	deque<int> dq; // Declare a deque container named 'dq' that holds integers

	dq.push_back(1); // Insert the value 1 at the back of the deque
	// After this operation: dq = {1}

	dq.emplace_back(2); // Insert the value 2 at the back of the deque
	// After this operation: dq = {1, 2}

	dq.push_front(4); // Insert the value 4 at the front of the deque
	// After this operation: dq = {4, 1, 2}

	dq.emplace_front(3); // Insert the value 3 at the front of the deque
	// After this operation: dq = {3, 4, 1, 2}

	dq.pop_back(); // Remove the element at the back of the deque
	// After this operation: dq = {3, 4, 1}

	dq.pop_front(); // Remove the element at the front of the deque
	// After this operation: dq = {4, 1}

	// Print Deque
	for(auto it: dq){
		cout<<it<<" ";
	}
	cout<<endl;
	// Output : 4 1

	dq.back(); // Access the element at the back of the deque (returns 1)

	dq.front(); // Access the element at the front of the deque (returns 4)

	
	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}

int main(){

	explainDeque();
    return 0;
}