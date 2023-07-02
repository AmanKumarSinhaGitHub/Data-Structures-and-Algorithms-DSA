#include <iostream>
using namespace std;

int findUnique(int *arr, int size) {

    int ans = 0;
    
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        
        int n;
        cin >> n;

        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int unique = findUnique(arr, n);
        cout << unique << endl;
        
        delete[] arr;
    }

    return 0;
}
