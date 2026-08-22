#include <iostream>
#include <vector>
#include <algorithm>
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

    sort(arr.begin(), arr.end());

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}

// T(n)= O(n log n)
// S(n)= O(log n)
