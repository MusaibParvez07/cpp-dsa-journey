#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int min, max;
    cout << "Enter Lowest range: ";
    cin >> min;
    cout << "Enter Highest range: ";
    cin >> max;
    cout << "\n";

    for (int i = min; i <= max; i++)
    {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (i > 1 && count == 0)
            cout << i << endl;
    }
    return 0;
}