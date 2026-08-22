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
    cout << "Enter the Target Sum: ";
    cin >> target;

    int left = 0, right = n - 1;
    bool found = false;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "\nPair Found: "
                 << arr[left] << " + " << arr[right] << " = " << target << endl;
            cout << "Indices: " << left << " and " << right << endl;

            found = true;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    if (!found)
    {
        cout << "\nNo pair found." << endl;
    }

    return 0;
}

// T(n): O(n)
// S(n): O(1)