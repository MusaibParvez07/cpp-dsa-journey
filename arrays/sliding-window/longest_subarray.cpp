#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Array Elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int targetSum;
    cout << "Enter the maximum target sum limit: ";
    cin >> targetSum;

    int left = 0;
    int windowSum = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++)
    {
        windowSum += arr[right];

        while (windowSum > targetSum && left <= right)
        {
            windowSum -= arr[left];
            left++;
        }

        if (windowSum <= targetSum)
        {
            maxLength = max(maxLength, right - left + 1);
        }
    }

    cout << "Longest Subarray Length: " << maxLength << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)
