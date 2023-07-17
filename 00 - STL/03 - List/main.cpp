#include <bits/stdc++.h>
using namespace std;


/*
In C++, list is a container class template provided by the Standard Template Library (STL).

It is similar to vector

It is an implementation of a doubly-linked list, which means that it allows efficient insertion and removal of elements at both ends and in the middle of the list.

*/

void explainList() {

	// Create an empty list of integers
	list<int> ls; 

	// Add 2 to the back of the list 
	ls.push_back(2); 	// ls: {2}

	// Add 4 to the back of the list 
	ls.emplace_back(4);	// ls: {2, 4}

	// Add 5 to the front of the list
	ls.push_front(5);   // ls: {5, 2, 4}

	// Add 10 to the front of the list
	ls.emplace_front(10); // ls: {10 ,5, 2, 4}

	// Printing the list
	for(auto i: ls)
		cout<<i<<" ";
	cout<<endl;

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap....
}

int main(){

	explainList();

    return 0;
}