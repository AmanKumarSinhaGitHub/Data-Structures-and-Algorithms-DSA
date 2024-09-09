#include <bits/stdc++.h>
using namespace std;

// Comparator function for sorting pairs according to your own rules

// Sort based on the second element of the pair in ascending order. 

// If the second element are the same, sort based on the first element of the pair, but in descending order. 

bool comp(pair<int,int>p1, pair<int,int>p2) {

	if (p1.second < p2.second) {
		return true; 
	} 
	
	else if (p1.second == p2.second){
		
		if (p1.first > p2.second){
			return true; 
		} 
	}

	return false; // means swap the numbers (internally)
}

void explainExtra() {


	// Sorting
	int arr[] = {1, 5, 3, 2};

	// Sort in ascending order
	sort(arr, arr+4); // [first, last)

	// Printing sorted array
	for(auto i: arr)
		cout<<i<<" ";
	cout<<endl;
	// Output : 1 2 3 5


	// Sort in descending order
	sort(arr, arr+4, greater<int>()); 
	
	// Printing sorted array
	for(auto i: arr)
		cout<<i<<" ";
	cout<<endl;
	// Output : 5 3 2 1








	vector<int> vec = {5, 3, 6, 2};

	// Sort in ascending order
	sort(vec.begin(), vec.end());

	// Printing sorted vector
	for(auto i: vec)
		cout<<i<<" ";
	cout<<endl;
	// Output : 2 3 5 6



	// Sort in descending order
	sort(vec.begin(), vec.end(), greater<int>());

	// Printing sorted vector
	for(auto i: vec)
		cout<<i<<" ";
	cout<<endl;
	// Output : 6 5 3 2


	// Note : You can sort in your own way also by creating a comperator. let's see the example

	
    
    pair<int,int> p[] = {{1,2}, {2, 1}, {4, 1}}; 

    // Sort based on the second element of the pair in ascending order. 
	// {2,1} {4,1} {1,2} 

	// If the second element are the same, sort based on the first element of the pair, but in descending order. 
	// {4,1} {2,1} {1,2}


	sort(p, p+3 ,comp); 

	// Printing the sorted pair according to the rules that i have given to the comperator


	for(auto i: p)
		cout<<i.first<<" "<<i.second<<endl;
	// Output : {4,1}, {2, 1}, {1, 2}}; 








	// __builtin_popcount for int
	// used to count the number of set (1) bits 
	int num = 7; // (111) = 7 in Binary 
	int cnt = __builtin_popcount(num); 
	cout<<"Set Bits in 7 i.e 111 in binary is "<<cnt<<endl;

	// __builtin_popcountll for long long
	long long numm = 165786578687;
	int cntt = __builtin_popcountll(numm);
	cout<<"Set Bits in 165786578687 i.e (10011010011001101001100110111011111111) in binary is "<<cntt<<endl;








	// Find all permutations of a number
	string s = "123"; 
	sort(s.begin(), s.end());

	do {
		cout << s << endl; 
	} while(next_permutation(s.begin(), s.end())); 

	// 123
	// 132
	// 213
	// 231
	// 312
	// 321

	// Note: if s = "231"
	// then permutations = 231, 312, 321
	// so it is important to sort the num first to get all the permutations






	int ar[] = {12, 7, 32, 75, 22};

	// Get max element
	int maxEle = *max_element(ar,ar+5); 
	cout<<maxEle<<endl; // 75


	int minEle = *min_element(ar, ar+5);
	cout<<minEle<<endl; // 7
}


int main() {

	explainExtra();

	return 0;
}
