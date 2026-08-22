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

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

// Time: O(n)
// Extra space: O(1)