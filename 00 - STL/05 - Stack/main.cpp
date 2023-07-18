#include <bits/stdc++.h>
using namespace std;

/*
Stack in C++ is a data structure that stores a collection of elements in a specific order. 

It follows the Last-In-First-Out (LIFO) principle, meaning that the last element added to the stack is the first one to be removed. 

You can imagine a "stack" as a stack of books where you can only add or remove books from the top.
*/





/****************************************************************************************/





// You can access stack by using indexing, so you need to print stack something like this

// Function to print the elements of a stack (through - **pass by value**)

void printStack(stack<int> s) {
	
	cout<<"Printing stack"<<endl;

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void explainStack() {

	// Declare a stack named 'st' that stores integers.
	stack<int> st;

	// Pushing the elements in stack
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(3); // {3, 3, 2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}
	
	/*
		| 5 |	st.top() = 5
		| 3 |
		| 3 |
		| 2 |	this is a stack
		| 1 |
		-----
	
	*/
	
	//

	// Print the top element of the stack 'st', which is '5'.
	cout << st.top()<<endl; 

	// st[2] is invalid, you can't access stack like vectors
	// Printing stack using function, check line no (26)
	printStack(st);
	// Output : 5 3 3 2 1 

	// Remove the top element from the stack 'st'. 
	st.pop(); // The stack now looks like {3, 3, 2, 1}.

	cout << st.top()<<endl; // Prints '3'

	cout << st.size()<<endl; // Prints '4'

	// Printing stack using function, check line no (26)
	printStack(st);
	// Output : 3 3 2 1 

	// Check if the stack 'st' is empty and return boolean value
	cout << st.empty()<<endl; 

	// Declare two stacks named 'st1' and 'st2' that store integers.
	stack<int>st1, st2;

	// Swap the contents of 'st1' and 'st2'.
	st1.swap(st2);

}

int main(){

	explainStack();

    return 0;
}