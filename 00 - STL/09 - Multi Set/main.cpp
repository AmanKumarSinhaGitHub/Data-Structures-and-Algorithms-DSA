#include <bits/stdc++.h>
using namespace std;

void explainMultiSet() {

	// Everything is same as set
	// but it stores duplicate elements also


	multiset<int>ms;
	
	ms.insert(5); // {5}
	ms.insert(1); // {1, 5}
	ms.insert(1); // {1, 1, 5}
	ms.insert(1); // {1, 1, 1, 5}
	ms.insert(2); // {1, 1, 1, 2, 5}

	for(auto i: ms)
		cout<<i<<" ";
	cout<<endl;

	ms.erase(1); // all 1's erased

	// count the occourence of 1
	int cnt = ms.count(1); 

	// only a single one erased because we are providing an iterator
	ms.erase(ms.find(1));

	// rest all function same as set
}

int main(){
	
	explainMultiSet();

    return 0;
}