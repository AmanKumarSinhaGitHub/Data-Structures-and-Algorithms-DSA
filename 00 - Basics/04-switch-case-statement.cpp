#include <iostream>
using namespace std;

/*
Take the day no and print the corresponding day.

For 1 -> Print Monday
for 2 -> Print Tuesday and so on....

*/
int main()
{

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Enter between 1 to 7" << endl;
        break;
    }

    return 0;
}