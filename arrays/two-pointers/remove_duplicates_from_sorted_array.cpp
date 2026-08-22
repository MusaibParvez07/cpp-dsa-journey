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

    int uniqueIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[uniqueIndex])
        {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    cout << "\nArray after removing duplicates: ";

    for (int i = 0; i <= uniqueIndex; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

// Time: O(n)
// Extra space: O(1)