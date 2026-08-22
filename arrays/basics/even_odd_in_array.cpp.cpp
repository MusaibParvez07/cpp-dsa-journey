#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements in the Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nResults:\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " is Even" << endl;
        }
        else
        {
            cout << arr[i] << " is Odd" << endl;
        }
    }
    return 0;
}

// Time: O(n)
// Space: O(n)