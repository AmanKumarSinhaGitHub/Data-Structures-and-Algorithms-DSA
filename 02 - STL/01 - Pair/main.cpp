#include <bits/stdc++.h>
using namespace std;

void explainPair() {

	// If you want to store one value you can use "int" or anything else 
	// but when you want to store 2 values then you need pair
	pair<int, int> p = {10, 50};

	cout << p.first << " " << p.second<<endl;
	// Output : 10 50

	// You can also assign or change the value of Pair
	p.first = 100;
	p.second = 200;
	cout << p.first << " " << p.second<<endl;
	// Output : 100 200







	// You can also store more than 2 variable by using nested property of pairs
	pair<int, pair<int, int>> np = {10, {30, 40}};

	cout << p.first << " " << np.second.first << " " << np.second.second<<endl;
	// Output : 10 30 40

	pair< pair<int,int>, pair<int,int> > npp = {{10,20}, {30, 40}};
	cout <<npp.first.first<<" "<<npp.first.second<<" "<<npp.second.first<<" "<<npp.second.second<<endl;
	// Output : 10 20 30 40







	// You can also declare a pair array
	pair<int, int> arr[] = { {10, 20}, {30, 40}, {50, 60} };

	for(int i=0; i<3; i++){
		cout<<arr[i].first<<" "<<arr[i].second<<" ";
	}
	// Output : 10 20 30 40 50 60

}

int main(){

	explainPair();
	
    return 0;
}