#include <bits/stdc++.h>
using namespace std;

// Similar to Stack
// But it follow FIFO (First In First Out) principal
// Amazine queue as a line at ticker counter, where the person come first, get ticket first and get out of the line

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void explainQueue() {
    queue<int> q;
    
    q.push(1); 		// Queue: {1}
    q.push(2); 		// Queue: {1, 2}
    q.emplace(4); 	// Queue: {1, 2, 4}

	// Increment the last element of the queue by 5.
    q.back() += 5; 	// Queue: {1, 2, 9}

	// Print the last element (9)
    cout << "Back element: " << q.back() << endl; 

	// Print the first element (1)
    cout << "Front element: " << q.front() << endl; 

	// Remove the first element from the queue. 
    q.pop(); // Queue: {2, 9}

	// Print the new first element (2)
    cout << "After removing the front element, new front element: " << q.front() << endl; 

    cout << "Elements of the queue: ";
	// Print all elements of the queue
    printQueue(q); 

    cout << "Size of the queue: " << q.size() << endl; 

	// Check if the queue is empty
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl; 

    // You can use other functions like swap, empty, etc. on the queue as well
}

int main() {
    explainQueue();

    return 0;
}
