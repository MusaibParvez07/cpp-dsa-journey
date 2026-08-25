#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 5, 1, 3, 2};

    int k = 3;
    int windowSum = 0;
    int minSum = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        windowSum += arr[i];

        if (i >= k - 1)
        {
            minSum = min(minSum, windowSum);
            windowSum -= arr[i - k + 1];
        }
    }
    cout << "Minimum Sum: " << minSum << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)