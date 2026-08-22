#include <iostream>
#include <vector>
#include <climits>
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

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
    {
        cout << "\nSecond Smallest Element does not exist." << endl;
    }
    else
    {
        cout << "\nSecond Smallest Element: " << secondSmallest << endl;
    }

    return 0;
}

// Time: O(n)
// Space: O(n)