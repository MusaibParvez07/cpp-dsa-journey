#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 5, 1, 3, 2};

    int k = 3;
    int windowSum = 0;
    int maxSum = 0;

    for (int i = 0; i < arr.size(); i++)
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