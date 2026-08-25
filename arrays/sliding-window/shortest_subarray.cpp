#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 1, 2, 4, 3};

    int target = 7;
    int left = 0;
    int windowSum = 0;
    int minLength = INT_MAX;

    for (int right = 0; right < arr.size(); right++)
    {
        windowSum += arr[right];

        while (windowSum >= target)
        {
            minLength = min(minLength, right - left + 1);

            windowSum -= arr[left];
            left++;
        }
    }

    if (minLength == INT_MAX)
        minLength = 0;

    cout << "Minimum Length: " << minLength << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)