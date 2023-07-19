#include <bits/stdc++.h>
using namespace std;

// A priority queue is an abstract data type that is similar to a queue 
// but assigns a priority to each element.

// In short, stores element in descending order

// Push/Pop - log n
// Top - O(1)


void printPriorityQueue(priority_queue<int> pq) {
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void explainPQ() {

    // Default (Maximum Heap)
    priority_queue<int> pq;

	// Add elements
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

	// Print the top element (10)
    cout << "Top element: " << pq.top() << endl; 

	// Remove the top element from the priority queue. 
    pq.pop(); // {8, 5, 2}

	// Print the new top element (8)
    cout << "New top element after popping: " << pq.top() << endl; 

    cout << "Elements of the priority queue: ";
    printPriorityQueue(pq); 








	// If you want to create a priority queue 
	// that stores in ""ascending order"". Do this

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> minHeapPQ;

    minHeapPQ.push(5); // {5}
    minHeapPQ.push(2); // {2, 5}
    minHeapPQ.push(8); // {2, 5, 8}
    minHeapPQ.emplace(10); // {2, 5, 8, 10}

    cout << "Top element of the minimum heap: " << minHeapPQ.top() << endl; 
	// Output : 2

	// Rest function is same as queue
}


int main() {

    explainPQ();

    return 0;
}
