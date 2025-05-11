#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin >> num;

    string remainer = "";

    while (num != 0)
    {
        remainer = remainer + to_string((num % 2));
        num = num / 2;
    }

    reverse(remainer.begin(), remainer.end());

    cout << remainer; 

    return 0;
}