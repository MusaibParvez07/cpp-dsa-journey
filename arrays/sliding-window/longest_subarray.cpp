#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 3, 2, 1};

    int k = 5;
    int left = 0;
    int windowSum = 0;
    int maxLength = 0;

    for (int right = 0; right < arr.size(); right++)
    {
        windowSum += arr[right];

        while (windowSum > k)
        {
            windowSum -= arr[left];
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }
    cout << "Longest Subarray Length: " << maxLength << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)