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

    bool isSorted = true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "\nArray is Sorted." << endl;
    }
    else
    {
        cout << "\nArray is Not Sorted." << endl;
    }

    return 0;
}

// Time: O(n) worst case
// Best case: O(1) if the first comparison already fails
// Extra space: O(1)