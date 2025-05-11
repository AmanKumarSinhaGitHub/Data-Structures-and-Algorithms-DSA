#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decimalToBinary(int num)
{
    if (num == 1 || num == 0)
    {
        return to_string(num);
    }
    string remainer = "";
    while (num > 0)
    {
        remainer = remainer + to_string((num % 2));
        num = num / 2;
    }

    reverse(remainer.begin(), remainer.end());

    return remainer;
}

int main()
{
    int num;
    cin >> num;

    cout << decimalToBinary(num);

    return 0;
}