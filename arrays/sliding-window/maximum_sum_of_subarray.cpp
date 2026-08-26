#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements in Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter Array Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter window size (k): ";
    cin >> k;

    if (k > n || k <= 0)
    {
        cout << "Invalid window size!" << endl;
        return 0;
    }

    int windowSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        windowSum += arr[i];

        if (i >= k - 1)
        {
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[i - k + 1];
        }
    }

    cout << "Maximum Sum: " << maxSum << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)
