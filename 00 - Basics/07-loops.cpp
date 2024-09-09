#include <iostream>
using namespace std;

int main()
{

    // when we need to do repetetive task we use loops

    // we have 3 loops - "for loop", "while loop" and "do while loop"

    // For loop

    for (int i = 0; i < 5; i++)
    {
        // prints hello world 5 times
        cout << "Hello World" << endl;
    }

    // while loop

    int i = 0;

    while (i < 5)
    {
        cout << "Hello Everyone" << endl;
        i++;
    }

    // do while loop
    int j = 0;
    do
    {
        cout << "Hii everyone" << endl;
        j++;
    } while (j < 5);

    // Note : do while loop "execute code first" and then check the condition, that means it will execute the code atleast one time.

    return 0;
}