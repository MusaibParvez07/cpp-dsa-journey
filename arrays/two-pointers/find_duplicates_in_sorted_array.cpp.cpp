#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of Array Elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Sorted Array Elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate Elements in the Array are: " << endl;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}

// Time  : O(n)
// Space : O(1)