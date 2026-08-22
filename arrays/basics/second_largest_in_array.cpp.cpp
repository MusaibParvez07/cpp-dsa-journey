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

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        cout << "\nSecond Largest Element does not exist." << endl;
    }
    else
    {
        cout << "\nSecond Largest Element: " << secondLargest << endl;
    }

    return 0;
}

// Time: O(n)
// Space: O(n)