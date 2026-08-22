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

    long long product = 1;

    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }

    cout << "\nProduct of Array Elements: " << product << endl;

    return 0;
}

// Time: O(n)
// Space: O(n)