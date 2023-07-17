#include <bits/stdc++.h>
using namespace std;

/* A vector is a dynamic array-like container that can store elements of the same type. It is part of the Standard Template Library (STL) and provides many useful functions and operations for working with collections of data.

To use vectors in C++, you need to include the <vector> header file. */

void explainVector() {

	// Declaring a empty vector
	vector<int> v;  // {}

	v.push_back(10); // {10}
	v.emplace_back(20); // {10, 20}

	cout<<v[0]<<" "<<v[1]<<endl;
	// Output : 10 20 

	// You can also change the value at particular index in vector
	v[0] = 900;
	cout<<v[0]<<" "<<v[1]<<endl;
	// Output : 900 20 




	/****************************************************************************/



	// Pair Vector
	vector<pair<int, int>>vec;

	vec.push_back({10, 20});
	vec.emplace_back(30, 40);
	
	cout<<vec[0].first<<" "<<vec[0].second<<" "<<vec[1].first<<" "<<vec[1].second<<endl;
	// Output : 10 20 30 40




	/****************************************************************************/




	// A vector of size 5 initialized with 0 or might take garbage value 
	vector<int> vect(5); // {0, 0, 0, 0, 0}


	// Declaring Vector of size 5 with every element as 100
	vector<int> v1(5, 100); 
	// {100, 100, 100, 100, 100}

	// Printing vector using for each loop
	for(auto i: v1){
		cout<<i<<" ";
	}
	cout<<endl;
	// Output : 100 100 100 100 100


	// A vector of size 5 initialized with 20 
	vector<int> v2(5, 20); // {20, 20, 20, 20, 20}

	// Even declaring a vector of size 5, 
	// you can increase size of vector later by pushing more element on it
	v2.push_back(100);
	// Now vector size is 6
	// {20, 20, 20, 20, 20, 100}

	// Copying v3 element to v4
	vector<int> v3(v2); // {20, 20, 20, 20, 20, 100}




	/****************************************************************************/




	// Iterators or ways to access vector

	// Take the vector to be {10, 20, 30, 40}

	vector<int> v4 = {10, 20, 30 ,40};

	// iterator pointing to the beginning(index 0) of the vector's memory address
	vector<int>::iterator it = v4.begin();

	// Move the iterator to the next element (index 1)
	it++;
	cout << *(it) << endl; // Output: 20

	// Move the iterator two positions forward (index 3)
	it = it + 2;
	cout << *(it) << endl; // Output : 40

	// iterator pointing to the right after end of the vector 
	// (means  this points to the memory address immediately after the last index of the vector)
	
	vector<int>::iterator itt = v4.end();

	// By doing itt-- , it will point to the memory address of the last element (index 3) in the vector.
	itt--; 



	// REVERSE ITERATORS IN STL


	// iterator pointing to the just before the first index of the vector
	vector<int>::reverse_iterator itr = v4.rend();

	// iterator pointing to the last element of the vector
	vector<int>::reverse_iterator itrr = v4.rbegin();

	// rend() and rbegin() moves in the reverse way
	
	// for example, regin() point to the last index memory address and 
	// if i do increment "itrr++" then it will move in reverse means it will point to the index just before the last index
	// Vec = {10, 20, 30, 40}
	//					   ^ (iterator pointing to 40) 
	// Vec = {10, 20, 30, 40}
	// 				   ^ (after doing it++ it points to 30)	   

	// Note : You will never going to use rend() or rbegin()




	/****************************************************************************/




	// Printing Vector

	// Vector = {10,20,30,40}
	cout << v4[0] << " " << v4.at(0)<<endl;
	// Output : 10 10

	// Print last element
	cout << v4.back() << endl;
	// Output : 40


	
	for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++) {
		cout << *(it) << " ";
	}
	cout<<endl;
	// Output : 10 20 30 40

	for (auto it = v4.begin(); it != v4.end(); it++) {
		cout << *(it) << " ";
	}
	cout<<endl;
	// Output : 10 20 30 40

	// Best way to print vector by using FOR EACH LOOP
	for (auto it : v4) {
		cout << it << " ";
	}
	cout<<endl;
	// Output : 10 20 30 40
	// auto :- it will automatically assign with the valid data type, in this case auto  represent int data type

	// Print vector using for loop
	for(int i=0; i<v4.size(); i++){
		cout<<v4[i]<<" ";
	}	
	cout<<endl;
	// Output : 10 20 30 40




	/****************************************************************************/




	// Delete element in vector

	// vector = {10, 20, 30, 40}
	v4.erase(v4.begin()+1); // Delete the 1st index element i.e. 20
	// v = {10, 30, 40}

	
	vector<int> v5 = {100, 200, 300, 400, 500, 600, 700};
	// Erase element [start, end), Here start included and end excluded
	// It will delete from index 2 to index 4 (because index 5 is excluded)

	v5.erase(v5.begin()+2, v5.begin() + 5); //  {300, 400, 500} [start, end) delete
	for(auto it: v5){
		cout<<it<<" ";	
	}
	cout<<endl;
	// Output : 100 200 600 700




	/****************************************************************************/




	// Insert function

	vector<int>v6(2, 100); // {100, 100}

	// Insert 300 at the begining or index 0
	v6.insert(v6.begin(), 300); // {300, 100, 100};
	
	// Insert two 10 in vector from index 1
	v6.insert(v6.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}


	// copy vector or insert a vector in a vector
	vector<int> vctr(2, 50);  // vctr = {50, 50}

	// vector v6 = {300, 10, 10, 100, 100}
	v6.insert(v6.begin(), vctr.begin(), vctr.end()); 
	// vector v6 = {50, 50, 300, 10, 10, 100, 100}




	/****************************************************************************/




	vector<int>v7 = {10, 20}; 
	cout << v7.size()<<endl; // Output : 2

	//v7 = {10, 20}
	// remove last element
	v7.pop_back(); // {10}


	// v8 -> {10, 20}
	// v9 -> {30, 40}
	vector<int> v8 = {10,20};
	vector<int> v9 = {30, 40};

	// Swap the vector
	v8.swap(v9); // v8 -> {30, 40} , v9 -> {10, 20}

	v8.clear(); // erases the entire vector

	// if vector is empty it will return 1 else return 0
	cout << v8.empty(); 

	
}


int main(){

	explainVector();

    return 0;
}