#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements in the Array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the Sorted Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the Element to Search: ";
    cin >> target;

    int left = 0, right = n - 1;
    int lastOccurrence = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            lastOccurrence = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (lastOccurrence != -1)
    {
        cout << "\nLast Occurrence: " << lastOccurrence << endl;
    }
    else
    {
        cout << "\nElement not found." << endl;
    }

    return 0;
}

// Time: O(log n)
// Extra space: O(1)