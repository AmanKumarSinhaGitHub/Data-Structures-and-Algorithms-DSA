#include <bits/stdc++.h>
using namespace std;

// Map: Associative container that stores key-value pairs
// Key and value can have different data types

// Elements in the map are always stored in a ascending order based on the keys.
// map enforces uniqueness of keys. Each key can appear only once in the map.


void explainMap() {

	// {key, value}
	map<int, int> mpp; // int key and int value

    map<int, pair<int, int>> mpp1; // int key and pair<int, int> value

    map<pair<int, int>, int> mpp2; // pair<int, int> key and int value




	// Adding elements to the map using various methods

    mpp[1] = 2; // Add key 1 with value 2 to the map
    mpp.emplace(3, 1); // Emplace key 3 with value (1, 1) to the map using pair

    mpp.insert({2, 4}); // Insert key 2 with value 4 to the map

	// The map (mpp) will be automatically sorted based on the keys:
    // {1, 2}
    // {2, 4}
    // {3, 1}

	// Iterating over the map and printing elements

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;  
    }

	/*
	Output: 1 2 
			2 4 
			3 1
	*/


	
    mpp2[{2, 3}] = 10; // Add key (2, 3) with value 10 to the map using pair

    
	
	// Accessing elements in the map

    cout << mpp[1]<<endl; // Prints the value corresponding to key 1: 2
    cout << mpp[5]<<endl; // Since key 5 does not exist, it prints the default value for int, which is 0


	
    // Finding elements in the map using 'find' function

    auto it = mpp.find(3); // Points to the position where key 3 is found
    cout << it->second<<endl; // Output: 1
	
    auto it2 = mpp.find(5); // Points to the end of the map since key 5 is not present



    // Using lower_bound and upper_bound functions

    auto it3 = mpp.lower_bound(2); // Points to the first element with a key not less than 2
    auto it4 = mpp.upper_bound(3); // Points to the first element with a key greater than 3

    // Other operations like 'erase', 'swap', 'size', 'empty' work the same as explained in previous examples

}



int main(){

	explainMap();

    return 0;
}