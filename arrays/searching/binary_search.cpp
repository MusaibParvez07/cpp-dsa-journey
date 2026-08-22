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

    int left = 0;
    int right = n - 1;
    int index = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            index = mid;
            break;
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

    if (index != -1)
    {
        cout << "\nElement found at Index: " << index << endl;
    }
    else
    {
        cout << "\nElement not found." << endl;
    }

    return 0;
}

// Best case: O(1)
// Target is the first element.

// Worst case: O(log n)
// Target is at the end or doesn't exist.