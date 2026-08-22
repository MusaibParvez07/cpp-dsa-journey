#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 6)
            break;
        else
            cout << i << endl;
    }

    cout << "\n";

    for (int j = 0; j < 10; j++)
    {
        if (j == 6)
            continue;
        else
            cout << j << endl;
    }
    return 0;
}